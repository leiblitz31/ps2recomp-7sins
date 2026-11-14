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

// Function: sub_00322AD8
// Address: 0x322ad8 - 0x322ca0
void sub_00322AD8_0x322ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322AD8_0x322ad8");
#endif

    switch (ctx->pc) {
        case 0x322ad8u: goto label_322ad8;
        case 0x322adcu: goto label_322adc;
        case 0x322ae0u: goto label_322ae0;
        case 0x322ae4u: goto label_322ae4;
        case 0x322ae8u: goto label_322ae8;
        case 0x322aecu: goto label_322aec;
        case 0x322af0u: goto label_322af0;
        case 0x322af4u: goto label_322af4;
        case 0x322af8u: goto label_322af8;
        case 0x322afcu: goto label_322afc;
        case 0x322b00u: goto label_322b00;
        case 0x322b04u: goto label_322b04;
        case 0x322b08u: goto label_322b08;
        case 0x322b0cu: goto label_322b0c;
        case 0x322b10u: goto label_322b10;
        case 0x322b14u: goto label_322b14;
        case 0x322b18u: goto label_322b18;
        case 0x322b1cu: goto label_322b1c;
        case 0x322b20u: goto label_322b20;
        case 0x322b24u: goto label_322b24;
        case 0x322b28u: goto label_322b28;
        case 0x322b2cu: goto label_322b2c;
        case 0x322b30u: goto label_322b30;
        case 0x322b34u: goto label_322b34;
        case 0x322b38u: goto label_322b38;
        case 0x322b3cu: goto label_322b3c;
        case 0x322b40u: goto label_322b40;
        case 0x322b44u: goto label_322b44;
        case 0x322b48u: goto label_322b48;
        case 0x322b4cu: goto label_322b4c;
        case 0x322b50u: goto label_322b50;
        case 0x322b54u: goto label_322b54;
        case 0x322b58u: goto label_322b58;
        case 0x322b5cu: goto label_322b5c;
        case 0x322b60u: goto label_322b60;
        case 0x322b64u: goto label_322b64;
        case 0x322b68u: goto label_322b68;
        case 0x322b6cu: goto label_322b6c;
        case 0x322b70u: goto label_322b70;
        case 0x322b74u: goto label_322b74;
        case 0x322b78u: goto label_322b78;
        case 0x322b7cu: goto label_322b7c;
        case 0x322b80u: goto label_322b80;
        case 0x322b84u: goto label_322b84;
        case 0x322b88u: goto label_322b88;
        case 0x322b8cu: goto label_322b8c;
        case 0x322b90u: goto label_322b90;
        case 0x322b94u: goto label_322b94;
        case 0x322b98u: goto label_322b98;
        case 0x322b9cu: goto label_322b9c;
        case 0x322ba0u: goto label_322ba0;
        case 0x322ba4u: goto label_322ba4;
        case 0x322ba8u: goto label_322ba8;
        case 0x322bacu: goto label_322bac;
        case 0x322bb0u: goto label_322bb0;
        case 0x322bb4u: goto label_322bb4;
        case 0x322bb8u: goto label_322bb8;
        case 0x322bbcu: goto label_322bbc;
        case 0x322bc0u: goto label_322bc0;
        case 0x322bc4u: goto label_322bc4;
        case 0x322bc8u: goto label_322bc8;
        case 0x322bccu: goto label_322bcc;
        case 0x322bd0u: goto label_322bd0;
        case 0x322bd4u: goto label_322bd4;
        case 0x322bd8u: goto label_322bd8;
        case 0x322bdcu: goto label_322bdc;
        case 0x322be0u: goto label_322be0;
        case 0x322be4u: goto label_322be4;
        case 0x322be8u: goto label_322be8;
        case 0x322becu: goto label_322bec;
        case 0x322bf0u: goto label_322bf0;
        case 0x322bf4u: goto label_322bf4;
        case 0x322bf8u: goto label_322bf8;
        case 0x322bfcu: goto label_322bfc;
        case 0x322c00u: goto label_322c00;
        case 0x322c04u: goto label_322c04;
        case 0x322c08u: goto label_322c08;
        case 0x322c0cu: goto label_322c0c;
        case 0x322c10u: goto label_322c10;
        case 0x322c14u: goto label_322c14;
        case 0x322c18u: goto label_322c18;
        case 0x322c1cu: goto label_322c1c;
        case 0x322c20u: goto label_322c20;
        case 0x322c24u: goto label_322c24;
        case 0x322c28u: goto label_322c28;
        case 0x322c2cu: goto label_322c2c;
        case 0x322c30u: goto label_322c30;
        case 0x322c34u: goto label_322c34;
        case 0x322c38u: goto label_322c38;
        case 0x322c3cu: goto label_322c3c;
        case 0x322c40u: goto label_322c40;
        case 0x322c44u: goto label_322c44;
        case 0x322c48u: goto label_322c48;
        case 0x322c4cu: goto label_322c4c;
        case 0x322c50u: goto label_322c50;
        case 0x322c54u: goto label_322c54;
        case 0x322c58u: goto label_322c58;
        case 0x322c5cu: goto label_322c5c;
        case 0x322c60u: goto label_322c60;
        case 0x322c64u: goto label_322c64;
        case 0x322c68u: goto label_322c68;
        case 0x322c6cu: goto label_322c6c;
        case 0x322c70u: goto label_322c70;
        case 0x322c74u: goto label_322c74;
        case 0x322c78u: goto label_322c78;
        case 0x322c7cu: goto label_322c7c;
        case 0x322c80u: goto label_322c80;
        case 0x322c84u: goto label_322c84;
        case 0x322c88u: goto label_322c88;
        case 0x322c8cu: goto label_322c8c;
        case 0x322c90u: goto label_322c90;
        case 0x322c94u: goto label_322c94;
        case 0x322c98u: goto label_322c98;
        case 0x322c9cu: goto label_322c9c;
        default: break;
    }

    ctx->pc = 0x322ad8u;

label_322ad8:
    // 0x322ad8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x322ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_322adc:
    // 0x322adc: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x322adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_322ae0:
    // 0x322ae0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x322ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_322ae4:
    // 0x322ae4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x322ae4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_322ae8:
    // 0x322ae8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x322ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_322aec:
    // 0x322aec: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x322aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
label_322af0:
    // 0x322af0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x322af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_322af4:
    // 0x322af4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x322af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_322af8:
    // 0x322af8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x322af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_322afc:
    // 0x322afc: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x322afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_322b00:
    // 0x322b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_322b04:
    // 0x322b04: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x322b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_322b08:
    // 0x322b08: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x322b08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_322b0c:
    // 0x322b0c: 0x12600057  beqz        $s3, . + 4 + (0x57 << 2)
label_322b10:
    if (ctx->pc == 0x322B10u) {
        ctx->pc = 0x322B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B0Cu;
        // 0x322b10: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322B14u;
        goto label_322b14;
    }
    ctx->pc = 0x322B0Cu;
    {
        const bool branch_taken_0x322b0c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x322B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B0Cu;
        // 0x322b10: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b0c) {
            ctx->pc = 0x322C6Cu;
            goto label_322c6c;
        }
    }
    ctx->pc = 0x322B14u;
label_322b14:
    // 0x322b14: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x322b14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_322b18:
    // 0x322b18: 0x16400024  bnez        $s2, . + 4 + (0x24 << 2)
label_322b1c:
    if (ctx->pc == 0x322B1Cu) {
        ctx->pc = 0x322B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B18u;
        // 0x322b1c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322B20u;
        goto label_322b20;
    }
    ctx->pc = 0x322B18u;
    {
        const bool branch_taken_0x322b18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x322B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B18u;
        // 0x322b1c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b18) {
            ctx->pc = 0x322BACu;
            goto label_322bac;
        }
    }
    ctx->pc = 0x322B20u;
label_322b20:
    // 0x322b20: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x322b20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_322b24:
    // 0x322b24: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x322b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_322b28:
    // 0x322b28: 0x8cc4b1b4  lw          $a0, -0x4E4C($a2)
    ctx->pc = 0x322b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294947252)));
label_322b2c:
    // 0x322b2c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x322b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_322b30:
    // 0x322b30: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x322b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961560)));
label_322b34:
    // 0x322b34: 0x40f809  jalr        $v0
label_322b38:
    if (ctx->pc == 0x322B38u) {
        ctx->pc = 0x322B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B34u;
        // 0x322b38: 0x34a50112  ori         $a1, $a1, 0x112 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)274);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322B3Cu;
        goto label_322b3c;
    }
    ctx->pc = 0x322B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322B3Cu);
        ctx->pc = 0x322B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B34u;
        // 0x322b38: 0x34a50112  ori         $a1, $a1, 0x112 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)274);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322B34u, 0x322B3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322B3Cu;
label_322b3c:
    // 0x322b3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x322b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322b40:
    // 0x322b40: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
label_322b44:
    if (ctx->pc == 0x322B44u) {
        ctx->pc = 0x322B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B40u;
        // 0x322b44: 0x3c030032  lui         $v1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322B48u;
        goto label_322b48;
    }
    ctx->pc = 0x322B40u;
    {
        const bool branch_taken_0x322b40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x322B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322B40u;
        // 0x322b44: 0x3c030032  lui         $v1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322b40) {
            ctx->pc = 0x322BA0u;
            goto label_322ba0;
        }
    }
    ctx->pc = 0x322B48u;
label_322b48:
    // 0x322b48: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x322b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_322b4c:
    // 0x322b4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x322b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_322b50:
    // 0x322b50: 0x24632608  addiu       $v1, $v1, 0x2608
    ctx->pc = 0x322b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9736));
label_322b54:
    // 0x322b54: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x322b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_322b58:
    // 0x322b58: 0x24c2003c  addiu       $v0, $a2, 0x3C
    ctx->pc = 0x322b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 60));
label_322b5c:
    // 0x322b5c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x322b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_322b60:
    // 0x322b60: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x322b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_322b64:
    // 0x322b64: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x322b64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 4));
label_322b68:
    // 0x322b68: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x322b68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_322b6c:
    // 0x322b6c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x322b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_322b70:
    // 0x322b70: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x322b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_322b74:
    // 0x322b74: 0xacc0003c  sw          $zero, 0x3C($a2)
    ctx->pc = 0x322b74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 0));
label_322b78:
    // 0x322b78: 0xac40ffdc  sw          $zero, -0x24($v0)
    ctx->pc = 0x322b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967260), GPR_U32(ctx, 0));
label_322b7c:
    // 0x322b7c: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x322b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
label_322b80:
    // 0x322b80: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x322b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
label_322b84:
    // 0x322b84: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x322b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
label_322b88:
    // 0x322b88: 0xac40fff0  sw          $zero, -0x10($v0)
    ctx->pc = 0x322b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 0));
label_322b8c:
    // 0x322b8c: 0xac40ffec  sw          $zero, -0x14($v0)
    ctx->pc = 0x322b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), GPR_U32(ctx, 0));
label_322b90:
    // 0x322b90: 0xac40ffe8  sw          $zero, -0x18($v0)
    ctx->pc = 0x322b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), GPR_U32(ctx, 0));
label_322b94:
    // 0x322b94: 0xac40ffe4  sw          $zero, -0x1C($v0)
    ctx->pc = 0x322b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967268), GPR_U32(ctx, 0));
label_322b98:
    // 0x322b98: 0xac40ffe0  sw          $zero, -0x20($v0)
    ctx->pc = 0x322b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967264), GPR_U32(ctx, 0));
label_322b9c:
    // 0x322b9c: 0x0  nop
    ctx->pc = 0x322b9cu;
    // NOP
label_322ba0:
    // 0x322ba0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x322ba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_322ba4:
    // 0x322ba4: 0x52400031  beql        $s2, $zero, . + 4 + (0x31 << 2)
label_322ba8:
    if (ctx->pc == 0x322BA8u) {
        ctx->pc = 0x322BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BA4u;
        // 0x322ba8: 0xaef20000  sw          $s2, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322BACu;
        goto label_322bac;
    }
    ctx->pc = 0x322BA4u;
    {
        const bool branch_taken_0x322ba4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x322ba4) {
            ctx->pc = 0x322BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322BA4u;
            // 0x322ba8: 0xaef20000  sw          $s2, 0x0($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322C6Cu;
            goto label_322c6c;
        }
    }
    ctx->pc = 0x322BACu;
label_322bac:
    // 0x322bac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x322bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_322bb0:
    // 0x322bb0: 0x26540018  addiu       $s4, $s2, 0x18
    ctx->pc = 0x322bb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_322bb4:
    // 0x322bb4: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x322bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_322bb8:
    // 0x322bb8: 0x26710018  addiu       $s1, $s3, 0x18
    ctx->pc = 0x322bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_322bbc:
    // 0x322bbc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x322bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_322bc0:
    // 0x322bc0: 0x26550040  addiu       $s5, $s2, 0x40
    ctx->pc = 0x322bc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_322bc4:
    // 0x322bc4: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x322bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_322bc8:
    // 0x322bc8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x322bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_322bcc:
    // 0x322bcc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x322bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_322bd0:
    // 0x322bd0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x322bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_322bd4:
    // 0x322bd4: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x322bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_322bd8:
    // 0x322bd8: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x322bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_322bdc:
    // 0x322bdc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x322bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_322be0:
    // 0x322be0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x322be0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_322be4:
    // 0x322be4: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x322be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_322be8:
    // 0x322be8: 0xae440014  sw          $a0, 0x14($s2)
    ctx->pc = 0x322be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
label_322bec:
    // 0x322bec: 0x0  nop
    ctx->pc = 0x322becu;
    // NOP
label_322bf0:
    // 0x322bf0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x322bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_322bf4:
    // 0x322bf4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_322bf8:
    if (ctx->pc == 0x322BF8u) {
        ctx->pc = 0x322BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BF4u;
        // 0x322bf8: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322BFCu;
        goto label_322bfc;
    }
    ctx->pc = 0x322BF4u;
    {
        const bool branch_taken_0x322bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322BF4u;
        // 0x322bf8: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322bf4) {
            ctx->pc = 0x322C04u;
            goto label_322c04;
        }
    }
    ctx->pc = 0x322BFCu;
label_322bfc:
    // 0x322bfc: 0xc0e3444  jal         func_38D110
label_322c00:
    if (ctx->pc == 0x322C00u) {
        ctx->pc = 0x322C04u;
        goto label_322c04;
    }
    ctx->pc = 0x322BFCu;
    SET_GPR_U32(ctx, 31, 0x322C04u);
    ctx->pc = 0x38D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D110u, 0x322BFCu, 0x322C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322C04u;
label_322c04:
    // 0x322c04: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x322c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_322c08:
    // 0x322c08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_322c0c:
    if (ctx->pc == 0x322C0Cu) {
        ctx->pc = 0x322C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C08u;
        // 0x322c0c: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C10u;
        goto label_322c10;
    }
    ctx->pc = 0x322C08u;
    {
        const bool branch_taken_0x322c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C08u;
        // 0x322c0c: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c08) {
            ctx->pc = 0x322C18u;
            goto label_322c18;
        }
    }
    ctx->pc = 0x322C10u;
label_322c10:
    // 0x322c10: 0xc0e3444  jal         func_38D110
label_322c14:
    if (ctx->pc == 0x322C14u) {
        ctx->pc = 0x322C18u;
        goto label_322c18;
    }
    ctx->pc = 0x322C10u;
    SET_GPR_U32(ctx, 31, 0x322C18u);
    ctx->pc = 0x38D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D110u, 0x322C10u, 0x322C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322C18u;
label_322c18:
    // 0x322c18: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x322c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_322c1c:
    // 0x322c1c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_322c20:
    if (ctx->pc == 0x322C20u) {
        ctx->pc = 0x322C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C1Cu;
        // 0x322c20: 0xae040008  sw          $a0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C24u;
        goto label_322c24;
    }
    ctx->pc = 0x322C1Cu;
    {
        const bool branch_taken_0x322c1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C1Cu;
        // 0x322c20: 0xae040008  sw          $a0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c1c) {
            ctx->pc = 0x322C2Cu;
            goto label_322c2c;
        }
    }
    ctx->pc = 0x322C24u;
label_322c24:
    // 0x322c24: 0xc0e3444  jal         func_38D110
label_322c28:
    if (ctx->pc == 0x322C28u) {
        ctx->pc = 0x322C2Cu;
        goto label_322c2c;
    }
    ctx->pc = 0x322C24u;
    SET_GPR_U32(ctx, 31, 0x322C2Cu);
    ctx->pc = 0x38D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D110u, 0x322C24u, 0x322C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322C2Cu;
label_322c2c:
    // 0x322c2c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x322c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_322c30:
    // 0x322c30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_322c34:
    if (ctx->pc == 0x322C34u) {
        ctx->pc = 0x322C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C30u;
        // 0x322c34: 0xae04000c  sw          $a0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C38u;
        goto label_322c38;
    }
    ctx->pc = 0x322C30u;
    {
        const bool branch_taken_0x322c30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C30u;
        // 0x322c34: 0xae04000c  sw          $a0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c30) {
            ctx->pc = 0x322C40u;
            goto label_322c40;
        }
    }
    ctx->pc = 0x322C38u;
label_322c38:
    // 0x322c38: 0xc0e3444  jal         func_38D110
label_322c3c:
    if (ctx->pc == 0x322C3Cu) {
        ctx->pc = 0x322C40u;
        goto label_322c40;
    }
    ctx->pc = 0x322C38u;
    SET_GPR_U32(ctx, 31, 0x322C40u);
    ctx->pc = 0x38D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D110u, 0x322C38u, 0x322C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322C40u;
label_322c40:
    // 0x322c40: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x322c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_322c44:
    // 0x322c44: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_322c48:
    if (ctx->pc == 0x322C48u) {
        ctx->pc = 0x322C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C44u;
        // 0x322c48: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C4Cu;
        goto label_322c4c;
    }
    ctx->pc = 0x322C44u;
    {
        const bool branch_taken_0x322c44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x322C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C44u;
        // 0x322c48: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c44) {
            ctx->pc = 0x322C54u;
            goto label_322c54;
        }
    }
    ctx->pc = 0x322C4Cu;
label_322c4c:
    // 0x322c4c: 0xc0e3444  jal         func_38D110
label_322c50:
    if (ctx->pc == 0x322C50u) {
        ctx->pc = 0x322C54u;
        goto label_322c54;
    }
    ctx->pc = 0x322C4Cu;
    SET_GPR_U32(ctx, 31, 0x322C54u);
    ctx->pc = 0x38D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D110u, 0x322C4Cu, 0x322C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322C54u;
label_322c54:
    // 0x322c54: 0x26940014  addiu       $s4, $s4, 0x14
    ctx->pc = 0x322c54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_322c58:
    // 0x322c58: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x322c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_322c5c:
    // 0x322c5c: 0x295102a  slt         $v0, $s4, $s5
    ctx->pc = 0x322c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_322c60:
    // 0x322c60: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_322c64:
    if (ctx->pc == 0x322C64u) {
        ctx->pc = 0x322C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C60u;
        // 0x322c64: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C68u;
        goto label_322c68;
    }
    ctx->pc = 0x322C60u;
    {
        const bool branch_taken_0x322c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C60u;
        // 0x322c64: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c60) {
            ctx->pc = 0x322BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322bf0;
        }
    }
    ctx->pc = 0x322C68u;
label_322c68:
    // 0x322c68: 0xaef20000  sw          $s2, 0x0($s7)
    ctx->pc = 0x322c68u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 18));
label_322c6c:
    // 0x322c6c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x322c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_322c70:
    // 0x322c70: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x322c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_322c74:
    // 0x322c74: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x322c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_322c78:
    // 0x322c78: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x322c78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_322c7c:
    // 0x322c7c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x322c7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_322c80:
    // 0x322c80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x322c80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_322c84:
    // 0x322c84: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x322c84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_322c88:
    // 0x322c88: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x322c88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_322c8c:
    // 0x322c8c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x322c8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_322c90:
    // 0x322c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_322c94:
    // 0x322c94: 0x3e00008  jr          $ra
label_322c98:
    if (ctx->pc == 0x322C98u) {
        ctx->pc = 0x322C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C94u;
        // 0x322c98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322C9Cu;
        goto label_322c9c;
    }
    ctx->pc = 0x322C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C94u;
        // 0x322c98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322C9Cu;
label_322c9c:
    // 0x322c9c: 0x0  nop
    ctx->pc = 0x322c9cu;
    // NOP
    ctx->pc = 0x322ca0u;
}
