#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00499A30
// Address: 0x499a30 - 0x499bd0
void sub_00499A30_0x499a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499A30_0x499a30");
#endif

    switch (ctx->pc) {
        case 0x499aa4u: goto label_499aa4;
        case 0x499ae8u: goto label_499ae8;
        case 0x499af4u: goto label_499af4;
        case 0x499b48u: goto label_499b48;
        case 0x499b54u: goto label_499b54;
        default: break;
    }

    ctx->pc = 0x499a30u;

    // 0x499a30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x499a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x499a34: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x499a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x499a38: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x499a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x499a3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x499a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499a40: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x499a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x499a44: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x499a44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499a48: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x499a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x499a4c: 0x30d4ffff  andi        $s4, $a2, 0xFFFF
    ctx->pc = 0x499a4cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x499a50: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x499a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x499a54: 0x3115ffff  andi        $s5, $t0, 0xFFFF
    ctx->pc = 0x499a54u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x499a58: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x499a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x499a5c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x499a5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499a60: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x499a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x499a64: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x499a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x499a68: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x499a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x499a6c: 0x16600018  bnez        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x499A6Cu;
    {
        const bool branch_taken_0x499a6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x499A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499A6Cu;
        // 0x499a70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499a6c) {
            ctx->pc = 0x499AD0u;
            goto label_499ad0;
        }
    }
    ctx->pc = 0x499A74u;
    // 0x499a74: 0x16c00016  bnez        $s6, . + 4 + (0x16 << 2)
    ctx->pc = 0x499A74u;
    {
        const bool branch_taken_0x499a74 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x499A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499A74u;
        // 0x499a78: 0x2952021  addu        $a0, $s4, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499a74) {
            ctx->pc = 0x499AD0u;
            goto label_499ad0;
        }
    }
    ctx->pc = 0x499A7Cu;
    // 0x499a7c: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x499a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x499a80: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x499a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x499a84: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x499a84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x499a88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x499a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x499a8c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x499a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x499a90: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x499a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x499a94: 0x34a50809  ori         $a1, $a1, 0x809
    ctx->pc = 0x499a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2057);
    // 0x499a98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x499a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x499a9c: 0xc127ca4  jal         func_49F290
    ctx->pc = 0x499A9Cu;
    SET_GPR_U32(ctx, 31, 0x499AA4u);
    ctx->pc = 0x499AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499A9Cu;
    // 0x499aa0: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x499A9Cu, 0x499AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499AA4u;
label_499aa4:
    // 0x499aa4: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x499aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x499aa8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x499aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x499aac: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x499aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x499ab0: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x499ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x499ab4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x499AB4u;
    {
        const bool branch_taken_0x499ab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x499AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499AB4u;
        // 0x499ab8: 0x2902818  mult        $a1, $s4, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x499ab4) {
            ctx->pc = 0x499AC4u;
            goto label_499ac4;
        }
    }
    ctx->pc = 0x499ABCu;
    // 0x499abc: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x499ABCu;
    {
        const bool branch_taken_0x499abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499ABCu;
        // 0x499ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499abc) {
            ctx->pc = 0x499B9Cu;
            goto label_499b9c;
        }
    }
    ctx->pc = 0x499AC4u;
label_499ac4:
    // 0x499ac4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x499ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x499ac8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x499AC8u;
    {
        const bool branch_taken_0x499ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499AC8u;
        // 0x499acc: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499ac8) {
            ctx->pc = 0x499B98u;
            goto label_499b98;
        }
    }
    ctx->pc = 0x499AD0u;
label_499ad0:
    // 0x499ad0: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x499AD0u;
    {
        const bool branch_taken_0x499ad0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x499AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499AD0u;
        // 0x499ad4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499ad0) {
            ctx->pc = 0x499B1Cu;
            goto label_499b1c;
        }
    }
    ctx->pc = 0x499AD8u;
    // 0x499ad8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x499ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x499adc: 0x241e0018  addiu       $fp, $zero, 0x18
    ctx->pc = 0x499adcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x499ae0: 0x2457adf0  addiu       $s7, $v0, -0x5210
    ctx->pc = 0x499ae0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946288));
    // 0x499ae4: 0x23e1018  mult        $v0, $s1, $fp
    ctx->pc = 0x499ae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_499ae8:
    // 0x499ae8: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x499ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x499aec: 0xc127b8e  jal         func_49EE38
    ctx->pc = 0x499AECu;
    SET_GPR_U32(ctx, 31, 0x499AF4u);
    ctx->pc = 0x499AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499AECu;
    // 0x499af0: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EE38u, 0x499AECu, 0x499AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499AF4u;
label_499af4:
    // 0x499af4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x499AF4u;
    {
        const bool branch_taken_0x499af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499AF4u;
        // 0x499af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499af4) {
            ctx->pc = 0x499B9Cu;
            goto label_499b9c;
        }
    }
    ctx->pc = 0x499AFCu;
    // 0x499afc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x499afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x499b00: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x499B00u;
    {
        const bool branch_taken_0x499b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x499b00) {
            ctx->pc = 0x499B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x499B00u;
            // 0x499b04: 0xae170014  sw          $s7, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x499B08u;
            goto label_499b08;
        }
    }
    ctx->pc = 0x499B08u;
label_499b08:
    // 0x499b08: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x499b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x499b0c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x499b0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x499b10: 0x234182b  sltu        $v1, $s1, $s4
    ctx->pc = 0x499b10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x499b14: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x499B14u;
    {
        const bool branch_taken_0x499b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x499B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B14u;
        // 0x499b18: 0x23e1018  mult        $v0, $s1, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x499b14) {
            ctx->pc = 0x499AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499ae8;
        }
    }
    ctx->pc = 0x499B1Cu;
label_499b1c:
    // 0x499b1c: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x499b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x499b20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x499b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499b24: 0xac730010  sw          $s3, 0x10($v1)
    ctx->pc = 0x499b24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 19));
    // 0x499b28: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x499b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x499b2c: 0x12a00013  beqz        $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x499B2Cu;
    {
        const bool branch_taken_0x499b2c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x499B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B2Cu;
        // 0x499b30: 0xa454000c  sh          $s4, 0xC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499b2c) {
            ctx->pc = 0x499B7Cu;
            goto label_499b7c;
        }
    }
    ctx->pc = 0x499B34u;
    // 0x499b34: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x499b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x499b38: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x499b38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x499b3c: 0x2453adf0  addiu       $s3, $v0, -0x5210
    ctx->pc = 0x499b3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946288));
    // 0x499b40: 0x2341018  mult        $v0, $s1, $s4
    ctx->pc = 0x499b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x499b44: 0x0  nop
    ctx->pc = 0x499b44u;
    // NOP
label_499b48:
    // 0x499b48: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x499b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x499b4c: 0xc127b8e  jal         func_49EE38
    ctx->pc = 0x499B4Cu;
    SET_GPR_U32(ctx, 31, 0x499B54u);
    ctx->pc = 0x499B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499B4Cu;
    // 0x499b50: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EE38u, 0x499B4Cu, 0x499B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499B54u;
label_499b54:
    // 0x499b54: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x499B54u;
    {
        const bool branch_taken_0x499b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B54u;
        // 0x499b58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499b54) {
            ctx->pc = 0x499B9Cu;
            goto label_499b9c;
        }
    }
    ctx->pc = 0x499B5Cu;
    // 0x499b5c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x499b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x499b60: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x499B60u;
    {
        const bool branch_taken_0x499b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x499b60) {
            ctx->pc = 0x499B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x499B60u;
            // 0x499b64: 0xae130014  sw          $s3, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x499B68u;
            goto label_499b68;
        }
    }
    ctx->pc = 0x499B68u;
label_499b68:
    // 0x499b68: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x499b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x499b6c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x499b6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x499b70: 0x235182b  sltu        $v1, $s1, $s5
    ctx->pc = 0x499b70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x499b74: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x499B74u;
    {
        const bool branch_taken_0x499b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x499B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B74u;
        // 0x499b78: 0x2341018  mult        $v0, $s1, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x499b74) {
            ctx->pc = 0x499B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499b48;
        }
    }
    ctx->pc = 0x499B7Cu;
label_499b7c:
    // 0x499b7c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x499b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x499b80: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x499b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x499b84: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x499b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x499b88: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x499b88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x499b8c: 0xac760014  sw          $s6, 0x14($v1)
    ctx->pc = 0x499b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 22));
    // 0x499b90: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x499b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x499b94: 0xa455000e  sh          $s5, 0xE($v0)
    ctx->pc = 0x499b94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 21));
label_499b98:
    // 0x499b98: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x499b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_499b9c:
    // 0x499b9c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x499b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x499ba0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x499ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x499ba4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x499ba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x499ba8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x499ba8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x499bac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x499bacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x499bb0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x499bb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x499bb4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x499bb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x499bb8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x499bb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x499bbc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x499bbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x499bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x499BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499BC4u;
        // 0x499bc8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499BCCu;
    // 0x499bcc: 0x0  nop
    ctx->pc = 0x499bccu;
    // NOP
    ctx->pc = 0x499bd0u;
}
