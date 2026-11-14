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

// Function: sub_0049DDA8
// Address: 0x49dda8 - 0x49df40
void sub_0049DDA8_0x49dda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049DDA8_0x49dda8");
#endif

    switch (ctx->pc) {
        case 0x49de10u: goto label_49de10;
        case 0x49de38u: goto label_49de38;
        case 0x49de44u: goto label_49de44;
        case 0x49de70u: goto label_49de70;
        case 0x49de7cu: goto label_49de7c;
        case 0x49deccu: goto label_49decc;
        case 0x49def8u: goto label_49def8;
        default: break;
    }

    ctx->pc = 0x49dda8u;

    // 0x49dda8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x49dda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x49ddac: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x49ddacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x49ddb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x49ddb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x49ddb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x49ddb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ddb8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x49ddb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x49ddbc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x49ddbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ddc0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x49ddc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x49ddc4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x49ddc4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ddc8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x49ddc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x49ddcc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x49ddccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ddd0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x49ddd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x49ddd4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x49ddd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x49ddd8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x49ddd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x49dddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49dddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49dde0: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x49dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x49dde4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x49DDE4u;
    {
        const bool branch_taken_0x49dde4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DDE4u;
        // 0x49dde8: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dde4) {
            ctx->pc = 0x49DE18u;
            goto label_49de18;
        }
    }
    ctx->pc = 0x49DDECu;
    // 0x49ddec: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x49ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x49ddf0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x49DDF0u;
    {
        const bool branch_taken_0x49ddf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ddf0) {
            ctx->pc = 0x49DE18u;
            goto label_49de18;
        }
    }
    ctx->pc = 0x49DDF8u;
    // 0x49ddf8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x49ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x49ddfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49ddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49de00: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x49DE00u;
    {
        const bool branch_taken_0x49de00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49de00) {
            ctx->pc = 0x49DE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49DE00u;
            // 0x49de04: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49DE14u;
            goto label_49de14;
        }
    }
    ctx->pc = 0x49DE08u;
    // 0x49de08: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x49DE08u;
    SET_GPR_U32(ctx, 31, 0x49DE10u);
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x49DE08u, 0x49DE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DE10u;
label_49de10:
    // 0x49de10: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x49de10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_49de14:
    // 0x49de14: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x49de14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_49de18:
    // 0x49de18: 0x12e00026  beqz        $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x49DE18u;
    {
        const bool branch_taken_0x49de18 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DE18u;
        // 0x49de1c: 0x2b41021  addu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49de18) {
            ctx->pc = 0x49DEB4u;
            goto label_49deb4;
        }
    }
    ctx->pc = 0x49DE20u;
    // 0x49de20: 0x12c00025  beqz        $s6, . + 4 + (0x25 << 2)
    ctx->pc = 0x49DE20u;
    {
        const bool branch_taken_0x49de20 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DE20u;
        // 0x49de24: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49de20) {
            ctx->pc = 0x49DEB8u;
            goto label_49deb8;
        }
    }
    ctx->pc = 0x49DE28u;
    // 0x49de28: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x49DE28u;
    {
        const bool branch_taken_0x49de28 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DE28u;
        // 0x49de2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49de28) {
            ctx->pc = 0x49DE5Cu;
            goto label_49de5c;
        }
    }
    ctx->pc = 0x49DE30u;
    // 0x49de30: 0x26f2000c  addiu       $s2, $s7, 0xC
    ctx->pc = 0x49de30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
    // 0x49de34: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x49de34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_49de38:
    // 0x49de38: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x49de38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x49de3c: 0xc127b8e  jal         func_49EE38
    ctx->pc = 0x49DE3Cu;
    SET_GPR_U32(ctx, 31, 0x49DE44u);
    ctx->pc = 0x49DE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DE3Cu;
    // 0x49de40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EE38u, 0x49DE3Cu, 0x49DE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DE44u;
label_49de44:
    // 0x49de44: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x49DE44u;
    {
        const bool branch_taken_0x49de44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DE44u;
        // 0x49de48: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49de44) {
            ctx->pc = 0x49DED8u;
            goto label_49ded8;
        }
    }
    ctx->pc = 0x49DE4Cu;
    // 0x49de4c: 0x26520014  addiu       $s2, $s2, 0x14
    ctx->pc = 0x49de4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x49de50: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x49de50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x49de54: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x49DE54u;
    {
        const bool branch_taken_0x49de54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DE54u;
        // 0x49de58: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49de54) {
            ctx->pc = 0x49DE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49de38;
        }
    }
    ctx->pc = 0x49DE5Cu;
label_49de5c:
    // 0x49de5c: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x49DE5Cu;
    {
        const bool branch_taken_0x49de5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DE5Cu;
        // 0x49de60: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49de5c) {
            ctx->pc = 0x49DE94u;
            goto label_49de94;
        }
    }
    ctx->pc = 0x49DE64u;
    // 0x49de64: 0x26d2000c  addiu       $s2, $s6, 0xC
    ctx->pc = 0x49de64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x49de68: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x49de68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49de6c: 0x0  nop
    ctx->pc = 0x49de6cu;
    // NOP
label_49de70:
    // 0x49de70: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x49de70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x49de74: 0xc127b8e  jal         func_49EE38
    ctx->pc = 0x49DE74u;
    SET_GPR_U32(ctx, 31, 0x49DE7Cu);
    ctx->pc = 0x49DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DE74u;
    // 0x49de78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EE38u, 0x49DE74u, 0x49DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DE7Cu;
label_49de7c:
    // 0x49de7c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x49DE7Cu;
    {
        const bool branch_taken_0x49de7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DE7Cu;
        // 0x49de80: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49de7c) {
            ctx->pc = 0x49DED8u;
            goto label_49ded8;
        }
    }
    ctx->pc = 0x49DE84u;
    // 0x49de84: 0x26520014  addiu       $s2, $s2, 0x14
    ctx->pc = 0x49de84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x49de88: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x49de88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x49de8c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x49DE8Cu;
    {
        const bool branch_taken_0x49de8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DE8Cu;
        // 0x49de90: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49de8c) {
            ctx->pc = 0x49DE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49de70;
        }
    }
    ctx->pc = 0x49DE94u;
label_49de94:
    // 0x49de94: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x49de94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x49de98: 0xae770010  sw          $s7, 0x10($s3)
    ctx->pc = 0x49de98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 23));
    // 0x49de9c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x49de9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x49dea0: 0xae76000c  sw          $s6, 0xC($s3)
    ctx->pc = 0x49dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 22));
    // 0x49dea4: 0xa6750014  sh          $s5, 0x14($s3)
    ctx->pc = 0x49dea4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20), (uint16_t)GPR_U32(ctx, 21));
    // 0x49dea8: 0xa6740016  sh          $s4, 0x16($s3)
    ctx->pc = 0x49dea8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 22), (uint16_t)GPR_U32(ctx, 20));
    // 0x49deac: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x49DEACu;
    {
        const bool branch_taken_0x49deac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DEACu;
        // 0x49deb0: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49deac) {
            ctx->pc = 0x49DF0Cu;
            goto label_49df0c;
        }
    }
    ctx->pc = 0x49DEB4u;
label_49deb4:
    // 0x49deb4: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x49deb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_49deb8:
    // 0x49deb8: 0x518018  mult        $s0, $v0, $s1
    ctx->pc = 0x49deb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x49debc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x49debcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x49dec0: 0x34a5080a  ori         $a1, $a1, 0x80A
    ctx->pc = 0x49dec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2058);
    // 0x49dec4: 0xc127ca4  jal         func_49F290
    ctx->pc = 0x49DEC4u;
    SET_GPR_U32(ctx, 31, 0x49DECCu);
    ctx->pc = 0x49DEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DEC4u;
    // 0x49dec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x49DEC4u, 0x49DECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DECCu;
label_49decc:
    // 0x49decc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49deccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ded0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49DED0u;
    {
        const bool branch_taken_0x49ded0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DED0u;
        // 0x49ded4: 0xae640010  sw          $a0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ded0) {
            ctx->pc = 0x49DEE0u;
            goto label_49dee0;
        }
    }
    ctx->pc = 0x49DED8u;
label_49ded8:
    // 0x49ded8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x49DED8u;
    {
        const bool branch_taken_0x49ded8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DED8u;
        // 0x49dedc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ded8) {
            ctx->pc = 0x49DF10u;
            goto label_49df10;
        }
    }
    ctx->pc = 0x49DEE0u;
label_49dee0:
    // 0x49dee0: 0x2b11818  mult        $v1, $s5, $s1
    ctx->pc = 0x49dee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49dee4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x49dee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49dee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49dee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49deec: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x49deecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x49def0: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x49DEF0u;
    SET_GPR_U32(ctx, 31, 0x49DEF8u);
    ctx->pc = 0x49DEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49DEF0u;
    // 0x49def4: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x49DEF0u, 0x49DEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49DEF8u;
label_49def8:
    // 0x49def8: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x49def8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x49defc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x49defcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x49df00: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x49df00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x49df04: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49df04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49df08: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x49df08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
label_49df0c:
    // 0x49df0c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x49df0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49df10:
    // 0x49df10: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x49df10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x49df14: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x49df14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x49df18: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x49df18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x49df1c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x49df1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49df20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x49df20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49df24: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x49df24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49df28: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x49df28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49df2c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x49df2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49df30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49df30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49df34: 0x3e00008  jr          $ra
    ctx->pc = 0x49DF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DF34u;
        // 0x49df38: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49DF3Cu;
    // 0x49df3c: 0x0  nop
    ctx->pc = 0x49df3cu;
    // NOP
    ctx->pc = 0x49df40u;
}
