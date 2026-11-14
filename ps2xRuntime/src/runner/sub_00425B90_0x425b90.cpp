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

// Function: sub_00425B90
// Address: 0x425b90 - 0x4265b8
void sub_00425B90_0x425b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00425B90_0x425b90");
#endif

    switch (ctx->pc) {
        case 0x425bd8u: goto label_425bd8;
        case 0x425c18u: goto label_425c18;
        case 0x425c90u: goto label_425c90;
        case 0x425ca4u: goto label_425ca4;
        case 0x425d20u: goto label_425d20;
        case 0x425d34u: goto label_425d34;
        case 0x425d58u: goto label_425d58;
        case 0x425de8u: goto label_425de8;
        case 0x425e70u: goto label_425e70;
        case 0x425e80u: goto label_425e80;
        case 0x425e90u: goto label_425e90;
        case 0x425ea0u: goto label_425ea0;
        case 0x425eb0u: goto label_425eb0;
        case 0x425ec0u: goto label_425ec0;
        case 0x425ed0u: goto label_425ed0;
        case 0x425ee0u: goto label_425ee0;
        case 0x425ef4u: goto label_425ef4;
        case 0x425f40u: goto label_425f40;
        case 0x425f54u: goto label_425f54;
        case 0x425f6cu: goto label_425f6c;
        case 0x425f80u: goto label_425f80;
        case 0x425f94u: goto label_425f94;
        case 0x425fa8u: goto label_425fa8;
        case 0x425fbcu: goto label_425fbc;
        case 0x425fd0u: goto label_425fd0;
        case 0x425fe4u: goto label_425fe4;
        case 0x426000u: goto label_426000;
        case 0x426080u: goto label_426080;
        case 0x4260b0u: goto label_4260b0;
        case 0x426178u: goto label_426178;
        case 0x426230u: goto label_426230;
        case 0x426284u: goto label_426284;
        case 0x4262dcu: goto label_4262dc;
        case 0x4263acu: goto label_4263ac;
        case 0x4263bcu: goto label_4263bc;
        case 0x4263f8u: goto label_4263f8;
        case 0x426404u: goto label_426404;
        case 0x426440u: goto label_426440;
        case 0x42644cu: goto label_42644c;
        case 0x426468u: goto label_426468;
        case 0x4264a0u: goto label_4264a0;
        case 0x4264b0u: goto label_4264b0;
        case 0x4264ecu: goto label_4264ec;
        case 0x4264f8u: goto label_4264f8;
        case 0x426524u: goto label_426524;
        case 0x426530u: goto label_426530;
        case 0x426564u: goto label_426564;
        case 0x426570u: goto label_426570;
        default: break;
    }

    ctx->pc = 0x425b90u;

    // 0x425b90: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x425b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x425b94: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x425b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x425b98: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x425b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
    // 0x425b9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x425b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425ba0: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x425ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x425ba4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x425ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425ba8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x425ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x425bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x425bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425bb0: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x425bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x425bb4: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x425bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x425bb8: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x425bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x425bbc: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x425bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x425bc0: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x425bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x425bc4: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x425bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x425bc8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x425bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x425bcc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x425bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x425bd0: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x425BD0u;
    SET_GPR_U32(ctx, 31, 0x425BD8u);
    ctx->pc = 0x425BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425BD0u;
    // 0x425bd4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x425BD0u, 0x425BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425BD8u;
label_425bd8:
    // 0x425bd8: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x425bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x425bdc: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x425bdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425be0: 0x8c514000  lw          $s1, 0x4000($v0)
    ctx->pc = 0x425be0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16384)));
    // 0x425be4: 0x1220005c  beqz        $s1, . + 4 + (0x5C << 2)
    ctx->pc = 0x425BE4u;
    {
        const bool branch_taken_0x425be4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x425BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425BE4u;
        // 0x425be8: 0x8f92add0  lw          $s2, -0x5230($gp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425be4) {
            ctx->pc = 0x425D58u;
            goto label_425d58;
        }
    }
    ctx->pc = 0x425BECu;
    // 0x425bec: 0x1a400057  blez        $s2, . + 4 + (0x57 << 2)
    ctx->pc = 0x425BECu;
    {
        const bool branch_taken_0x425bec = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x425BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425BECu;
        // 0x425bf0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425bec) {
            ctx->pc = 0x425D4Cu;
            goto label_425d4c;
        }
    }
    ctx->pc = 0x425BF4u;
    // 0x425bf4: 0xa2200018  sb          $zero, 0x18($s1)
    ctx->pc = 0x425bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x425bf8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x425bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x425bfc: 0x2653ffff  addiu       $s3, $s2, -0x1
    ctx->pc = 0x425bfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x425c00: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x425c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x425c04: 0x2636001c  addiu       $s6, $s1, 0x1C
    ctx->pc = 0x425c04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x425c08: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x425c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x425c0c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x425c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x425c10: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x425c10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x425c14: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x425c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_425c18:
    // 0x425c18: 0x8f82add0  lw          $v0, -0x5230($gp)
    ctx->pc = 0x425c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x425c1c: 0x1518c3  sra         $v1, $s5, 3
    ctx->pc = 0x425c1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 21), 3));
    // 0x425c20: 0x92850000  lbu         $a1, 0x0($s4)
    ctx->pc = 0x425c20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x425c24: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x425c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x425c28: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x425c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x425c2c: 0x153883  sra         $a3, $s5, 2
    ctx->pc = 0x425c2cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 21), 2));
    // 0x425c30: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x425c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x425c34: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x425c34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x425c38: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x425c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x425c3c: 0x473804  sllv        $a3, $a3, $v0
    ctx->pc = 0x425c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x425c40: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x425c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x425c44: 0x152043  sra         $a0, $s5, 1
    ctx->pc = 0x425c44u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 21), 1));
    // 0x425c48: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x425c48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x425c4c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x425c4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x425c50: 0x32a80001  andi        $t0, $s5, 0x1
    ctx->pc = 0x425c50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x425c54: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x425c54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x425c58: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x425c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x425c5c: 0x484004  sllv        $t0, $t0, $v0
    ctx->pc = 0x425c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x425c60: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x425c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x425c64: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x425c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425c68: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x425c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x425c6c: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x425c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x425c70: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x425c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x425c74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x425c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x425c78: 0xa3a20012  sb          $v0, 0x12($sp)
    ctx->pc = 0x425c78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x425c7c: 0x92830003  lbu         $v1, 0x3($s4)
    ctx->pc = 0x425c7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x425c80: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x425c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x425c84: 0xa3a30013  sb          $v1, 0x13($sp)
    ctx->pc = 0x425c84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x425c88: 0xc109bac  jal         func_426EB0
    ctx->pc = 0x425C88u;
    SET_GPR_U32(ctx, 31, 0x425C90u);
    ctx->pc = 0x425C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425C88u;
    // 0x425c8c: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426EB0u, 0x425C88u, 0x425C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425C90u;
label_425c90:
    // 0x425c90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x425C90u;
    {
        const bool branch_taken_0x425c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x425C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425C90u;
        // 0x425c94: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425c90) {
            ctx->pc = 0x425CA4u;
            goto label_425ca4;
        }
    }
    ctx->pc = 0x425C98u;
    // 0x425c98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x425c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425c9c: 0xc10920e  jal         func_424838
    ctx->pc = 0x425C9Cu;
    SET_GPR_U32(ctx, 31, 0x425CA4u);
    ctx->pc = 0x425CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425C9Cu;
    // 0x425ca0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424838u, 0x425C9Cu, 0x425CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425CA4u;
label_425ca4:
    // 0x425ca4: 0x8f83add0  lw          $v1, -0x5230($gp)
    ctx->pc = 0x425ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x425ca8: 0x26a80001  addiu       $t0, $s5, 0x1
    ctx->pc = 0x425ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x425cac: 0x810c3  sra         $v0, $t0, 3
    ctx->pc = 0x425cacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 3));
    // 0x425cb0: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x425cb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x425cb4: 0x2463fff9  addiu       $v1, $v1, -0x7
    ctx->pc = 0x425cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
    // 0x425cb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x425cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x425cbc: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x425cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x425cc0: 0x83083  sra         $a2, $t0, 2
    ctx->pc = 0x425cc0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 2));
    // 0x425cc4: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x425cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x425cc8: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x425cc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x425ccc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x425cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x425cd0: 0x663004  sllv        $a2, $a2, $v1
    ctx->pc = 0x425cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x425cd4: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x425cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x425cd8: 0x83843  sra         $a3, $t0, 1
    ctx->pc = 0x425cd8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 1));
    // 0x425cdc: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x425cdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x425ce0: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x425ce0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x425ce4: 0x92840001  lbu         $a0, 0x1($s4)
    ctx->pc = 0x425ce4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x425ce8: 0x673804  sllv        $a3, $a3, $v1
    ctx->pc = 0x425ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x425cec: 0x684004  sllv        $t0, $t0, $v1
    ctx->pc = 0x425cecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 3) & 0x1F));
    // 0x425cf0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x425cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x425cf4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x425cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x425cf8: 0xa3a40011  sb          $a0, 0x11($sp)
    ctx->pc = 0x425cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x425cfc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x425cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425d00: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x425d00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x425d04: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x425d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x425d08: 0xa3a20012  sb          $v0, 0x12($sp)
    ctx->pc = 0x425d08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x425d0c: 0x92830003  lbu         $v1, 0x3($s4)
    ctx->pc = 0x425d0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x425d10: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x425d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x425d14: 0xa3a30013  sb          $v1, 0x13($sp)
    ctx->pc = 0x425d14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x425d18: 0xc109bac  jal         func_426EB0
    ctx->pc = 0x425D18u;
    SET_GPR_U32(ctx, 31, 0x425D20u);
    ctx->pc = 0x425D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425D18u;
    // 0x425d1c: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x426EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x426EB0u, 0x425D18u, 0x425D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425D20u;
label_425d20:
    // 0x425d20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x425D20u;
    {
        const bool branch_taken_0x425d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x425D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425D20u;
        // 0x425d24: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425d20) {
            ctx->pc = 0x425D34u;
            goto label_425d34;
        }
    }
    ctx->pc = 0x425D28u;
    // 0x425d28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x425d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425d2c: 0xc10920e  jal         func_424838
    ctx->pc = 0x425D2Cu;
    SET_GPR_U32(ctx, 31, 0x425D34u);
    ctx->pc = 0x425D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425D2Cu;
    // 0x425d30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424838u, 0x425D2Cu, 0x425D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425D34u;
label_425d34:
    // 0x425d34: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x425d34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x425d38: 0x2aa20010  slti        $v0, $s5, 0x10
    ctx->pc = 0x425d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x425d3c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x425D3Cu;
    {
        const bool branch_taken_0x425d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x425D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425D3Cu;
        // 0x425d40: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425d3c) {
            ctx->pc = 0x425C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_425c18;
        }
    }
    ctx->pc = 0x425D44u;
    // 0x425d44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x425D44u;
    {
        const bool branch_taken_0x425d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x425D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425D44u;
        // 0x425d48: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425d44) {
            ctx->pc = 0x425D5Cu;
            goto label_425d5c;
        }
    }
    ctx->pc = 0x425D4Cu;
label_425d4c:
    // 0x425d4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x425d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425d50: 0xc1091ca  jal         func_424728
    ctx->pc = 0x425D50u;
    SET_GPR_U32(ctx, 31, 0x425D58u);
    ctx->pc = 0x425D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425D50u;
    // 0x425d54: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424728u, 0x425D50u, 0x425D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425D58u;
label_425d58:
    // 0x425d58: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x425d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_425d5c:
    // 0x425d5c: 0x58600039  blezl       $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x425D5Cu;
    {
        const bool branch_taken_0x425d5c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x425d5c) {
            ctx->pc = 0x425D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425D5Cu;
            // 0x425d60: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425E44u;
            goto label_425e44;
        }
    }
    ctx->pc = 0x425D64u;
    // 0x425d64: 0x31023  negu        $v0, $v1
    ctx->pc = 0x425d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x425d68: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x425d68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425d6c: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x425d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x425d70: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x425D70u;
    {
        const bool branch_taken_0x425d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x425D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425D70u;
        // 0x425d74: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425d70) {
            ctx->pc = 0x425DDCu;
            goto label_425ddc;
        }
    }
    ctx->pc = 0x425D78u;
    // 0x425d78: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x425d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x425d7c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x425D7Cu;
    {
        const bool branch_taken_0x425d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x425D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425D7Cu;
        // 0x425d80: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x425d7c) {
            ctx->pc = 0x425DC0u;
            goto label_425dc0;
        }
    }
    ctx->pc = 0x425D84u;
    // 0x425d84: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x425D84u;
    {
        const bool branch_taken_0x425d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x425d84) {
            ctx->pc = 0x425D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x425D84u;
            // 0x425d88: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425DACu;
            goto label_425dac;
        }
    }
    ctx->pc = 0x425D8Cu;
    // 0x425d8c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x425d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x425d90: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x425d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x425d94: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x425d94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x425d98: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x425d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x425d9c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x425d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x425da0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x425da0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x425da4: 0x2496ffff  addiu       $s6, $a0, -0x1
    ctx->pc = 0x425da4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x425da8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x425da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_425dac:
    // 0x425dac: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x425dacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x425db0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x425db0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x425db4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x425db4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x425db8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x425db8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x425dbc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x425dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_425dc0:
    // 0x425dc0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x425dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x425dc4: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x425dc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x425dc8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x425dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x425dcc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x425dccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x425dd0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x425dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x425dd4: 0x12c0001a  beqz        $s6, . + 4 + (0x1A << 2)
    ctx->pc = 0x425DD4u;
    {
        const bool branch_taken_0x425dd4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x425DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425DD4u;
        // 0x425dd8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425dd4) {
            ctx->pc = 0x425E40u;
            goto label_425e40;
        }
    }
    ctx->pc = 0x425DDCu;
label_425ddc:
    // 0x425ddc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x425ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425de0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x425de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425de4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x425de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_425de8:
    // 0x425de8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x425de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x425dec: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x425decu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x425df0: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x425df0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x425df4: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x425df4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x425df8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x425df8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x425dfc: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x425dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x425e00: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x425e00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x425e04: 0xa0a00006  sb          $zero, 0x6($a1)
    ctx->pc = 0x425e04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x425e08: 0xa0400007  sb          $zero, 0x7($v0)
    ctx->pc = 0x425e08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x425e0c: 0xa0600008  sb          $zero, 0x8($v1)
    ctx->pc = 0x425e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x425e10: 0xa0800009  sb          $zero, 0x9($a0)
    ctx->pc = 0x425e10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x425e14: 0xa0a0000a  sb          $zero, 0xA($a1)
    ctx->pc = 0x425e14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x425e18: 0xa040000b  sb          $zero, 0xB($v0)
    ctx->pc = 0x425e18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x425e1c: 0xa060000c  sb          $zero, 0xC($v1)
    ctx->pc = 0x425e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x425e20: 0xa080000d  sb          $zero, 0xD($a0)
    ctx->pc = 0x425e20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x425e24: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x425e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x425e28: 0xa0a0000e  sb          $zero, 0xE($a1)
    ctx->pc = 0x425e28u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x425e2c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x425e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x425e30: 0xa040000f  sb          $zero, 0xF($v0)
    ctx->pc = 0x425e30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x425e34: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x425e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x425e38: 0x16c0ffeb  bnez        $s6, . + 4 + (-0x15 << 2)
    ctx->pc = 0x425E38u;
    {
        const bool branch_taken_0x425e38 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x425E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425E38u;
        // 0x425e3c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425e38) {
            ctx->pc = 0x425DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_425de8;
        }
    }
    ctx->pc = 0x425E40u;
label_425e40:
    // 0x425e40: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x425e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_425e44:
    // 0x425e44: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x425e44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425e48: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x425e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x425e4c: 0x8ca44000  lw          $a0, 0x4000($a1)
    ctx->pc = 0x425e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16384)));
    // 0x425e50: 0xafa60068  sw          $a2, 0x68($sp)
    ctx->pc = 0x425e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
    // 0x425e54: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x425E54u;
    {
        const bool branch_taken_0x425e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x425E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425E54u;
        // 0x425e58: 0x8f85add0  lw          $a1, -0x5230($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425e54) {
            ctx->pc = 0x425F08u;
            goto label_425f08;
        }
    }
    ctx->pc = 0x425E5Cu;
    // 0x425e5c: 0x18a00029  blez        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x425E5Cu;
    {
        const bool branch_taken_0x425e5c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x425E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425E5Cu;
        // 0x425e60: 0x24b5ffff  addiu       $s5, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425e5c) {
            ctx->pc = 0x425F04u;
            goto label_425f04;
        }
    }
    ctx->pc = 0x425E64u;
    // 0x425e64: 0x2491001c  addiu       $s1, $a0, 0x1C
    ctx->pc = 0x425e64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x425e68: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x425e68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x425e6c: 0x0  nop
    ctx->pc = 0x425e6cu;
    // NOP
label_425e70:
    // 0x425e70: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x425e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x425e74: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x425e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425e78: 0xc109c22  jal         func_427088
    ctx->pc = 0x425E78u;
    SET_GPR_U32(ctx, 31, 0x425E80u);
    ctx->pc = 0x425E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425E78u;
    // 0x425e7c: 0x2652fff8  addiu       $s2, $s2, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427088u, 0x425E78u, 0x425E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425E80u;
label_425e80:
    // 0x425e80: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x425e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x425e84: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x425e84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x425e88: 0xc109c22  jal         func_427088
    ctx->pc = 0x425E88u;
    SET_GPR_U32(ctx, 31, 0x425E90u);
    ctx->pc = 0x425E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425E88u;
    // 0x425e8c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427088u, 0x425E88u, 0x425E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425E90u;
label_425e90:
    // 0x425e90: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x425e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x425e94: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x425e94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x425e98: 0xc109c22  jal         func_427088
    ctx->pc = 0x425E98u;
    SET_GPR_U32(ctx, 31, 0x425EA0u);
    ctx->pc = 0x425E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425E98u;
    // 0x425e9c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427088u, 0x425E98u, 0x425EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425EA0u;
label_425ea0:
    // 0x425ea0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x425ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x425ea4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x425ea4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x425ea8: 0xc109c22  jal         func_427088
    ctx->pc = 0x425EA8u;
    SET_GPR_U32(ctx, 31, 0x425EB0u);
    ctx->pc = 0x425EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425EA8u;
    // 0x425eac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427088u, 0x425EA8u, 0x425EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425EB0u;
label_425eb0:
    // 0x425eb0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x425eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x425eb4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x425eb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x425eb8: 0xc109c22  jal         func_427088
    ctx->pc = 0x425EB8u;
    SET_GPR_U32(ctx, 31, 0x425EC0u);
    ctx->pc = 0x425EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425EB8u;
    // 0x425ebc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427088u, 0x425EB8u, 0x425EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425EC0u;
label_425ec0:
    // 0x425ec0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x425ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x425ec4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x425ec4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x425ec8: 0xc109c22  jal         func_427088
    ctx->pc = 0x425EC8u;
    SET_GPR_U32(ctx, 31, 0x425ED0u);
    ctx->pc = 0x425ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425EC8u;
    // 0x425ecc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427088u, 0x425EC8u, 0x425ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425ED0u;
label_425ed0:
    // 0x425ed0: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x425ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x425ed4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x425ed4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x425ed8: 0xc109c22  jal         func_427088
    ctx->pc = 0x425ED8u;
    SET_GPR_U32(ctx, 31, 0x425EE0u);
    ctx->pc = 0x425EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425ED8u;
    // 0x425edc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427088u, 0x425ED8u, 0x425EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425EE0u;
label_425ee0:
    // 0x425ee0: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x425ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x425ee4: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x425ee4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x425ee8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x425ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425eec: 0xc109c22  jal         func_427088
    ctx->pc = 0x425EECu;
    SET_GPR_U32(ctx, 31, 0x425EF4u);
    ctx->pc = 0x425EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425EECu;
    // 0x425ef0: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427088u, 0x425EECu, 0x425EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425EF4u;
label_425ef4:
    // 0x425ef4: 0x641ffde  bgez        $s2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x425EF4u;
    {
        const bool branch_taken_0x425ef4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x425EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425EF4u;
        // 0x425ef8: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425ef4) {
            ctx->pc = 0x425E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_425e70;
        }
    }
    ctx->pc = 0x425EFCu;
    // 0x425efc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x425EFCu;
    {
        const bool branch_taken_0x425efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x425F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425EFCu;
        // 0x425f00: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425efc) {
            ctx->pc = 0x425F0Cu;
            goto label_425f0c;
        }
    }
    ctx->pc = 0x425F04u;
label_425f04:
    // 0x425f04: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x425f04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_425f08:
    // 0x425f08: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x425f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_425f0c:
    // 0x425f0c: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x425f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x425f10: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x425F10u;
    {
        const bool branch_taken_0x425f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x425F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425F10u;
        // 0x425f14: 0x8f85add0  lw          $a1, -0x5230($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425f10) {
            ctx->pc = 0x426008u;
            goto label_426008;
        }
    }
    ctx->pc = 0x425F18u;
    // 0x425f18: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x425f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x425f1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x425f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425f20: 0x8f87add0  lw          $a3, -0x5230($gp)
    ctx->pc = 0x425f20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x425f24: 0x8c914000  lw          $s1, 0x4000($a0)
    ctx->pc = 0x425f24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16384)));
    // 0x425f28: 0x12200195  beqz        $s1, . + 4 + (0x195 << 2)
    ctx->pc = 0x425F28u;
    {
        const bool branch_taken_0x425f28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x425F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425F28u;
        // 0x425f2c: 0xafb40068  sw          $s4, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425f28) {
            ctx->pc = 0x426580u;
            goto label_426580;
        }
    }
    ctx->pc = 0x425F30u;
    // 0x425f30: 0x18e00030  blez        $a3, . + 4 + (0x30 << 2)
    ctx->pc = 0x425F30u;
    {
        const bool branch_taken_0x425f30 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x425F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425F30u;
        // 0x425f34: 0x24f4ffff  addiu       $s4, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425f30) {
            ctx->pc = 0x425FF4u;
            goto label_425ff4;
        }
    }
    ctx->pc = 0x425F38u;
    // 0x425f38: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x425f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x425f3c: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x425f3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_425f40:
    // 0x425f40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x425f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x425f44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x425f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425f48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x425f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425f4c: 0xc109c62  jal         func_427188
    ctx->pc = 0x425F4Cu;
    SET_GPR_U32(ctx, 31, 0x425F54u);
    ctx->pc = 0x425F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425F4Cu;
    // 0x425f50: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427188u, 0x425F4Cu, 0x425F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425F54u;
label_425f54:
    // 0x425f54: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x425f54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x425f58: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x425f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x425f5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x425f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425f60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x425f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425f64: 0xc109c62  jal         func_427188
    ctx->pc = 0x425F64u;
    SET_GPR_U32(ctx, 31, 0x425F6Cu);
    ctx->pc = 0x425F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425F64u;
    // 0x425f68: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427188u, 0x425F64u, 0x425F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425F6Cu;
label_425f6c:
    // 0x425f6c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x425f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x425f70: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x425f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425f74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x425f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425f78: 0xc109c62  jal         func_427188
    ctx->pc = 0x425F78u;
    SET_GPR_U32(ctx, 31, 0x425F80u);
    ctx->pc = 0x425F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425F78u;
    // 0x425f7c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427188u, 0x425F78u, 0x425F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425F80u;
label_425f80:
    // 0x425f80: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x425f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x425f84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x425f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425f88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x425f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425f8c: 0xc109c62  jal         func_427188
    ctx->pc = 0x425F8Cu;
    SET_GPR_U32(ctx, 31, 0x425F94u);
    ctx->pc = 0x425F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425F8Cu;
    // 0x425f90: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427188u, 0x425F8Cu, 0x425F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425F94u;
label_425f94:
    // 0x425f94: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x425f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x425f98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x425f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425f9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x425f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425fa0: 0xc109c62  jal         func_427188
    ctx->pc = 0x425FA0u;
    SET_GPR_U32(ctx, 31, 0x425FA8u);
    ctx->pc = 0x425FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425FA0u;
    // 0x425fa4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427188u, 0x425FA0u, 0x425FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425FA8u;
label_425fa8:
    // 0x425fa8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x425fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x425fac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x425facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425fb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x425fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425fb4: 0xc109c62  jal         func_427188
    ctx->pc = 0x425FB4u;
    SET_GPR_U32(ctx, 31, 0x425FBCu);
    ctx->pc = 0x425FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425FB4u;
    // 0x425fb8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427188u, 0x425FB4u, 0x425FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425FBCu;
label_425fbc:
    // 0x425fbc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x425fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x425fc0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x425fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425fc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x425fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425fc8: 0xc109c62  jal         func_427188
    ctx->pc = 0x425FC8u;
    SET_GPR_U32(ctx, 31, 0x425FD0u);
    ctx->pc = 0x425FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425FC8u;
    // 0x425fcc: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427188u, 0x425FC8u, 0x425FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425FD0u;
label_425fd0:
    // 0x425fd0: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x425fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x425fd4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x425fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425fd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x425fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425fdc: 0xc109c62  jal         func_427188
    ctx->pc = 0x425FDCu;
    SET_GPR_U32(ctx, 31, 0x425FE4u);
    ctx->pc = 0x425FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425FDCu;
    // 0x425fe0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x427188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x427188u, 0x425FDCu, 0x425FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425FE4u;
label_425fe4:
    // 0x425fe4: 0x641ffd6  bgez        $s2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x425FE4u;
    {
        const bool branch_taken_0x425fe4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x425FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425FE4u;
        // 0x425fe8: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425fe4) {
            ctx->pc = 0x425F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_425f40;
        }
    }
    ctx->pc = 0x425FECu;
    // 0x425fec: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x425FECu;
    {
        const bool branch_taken_0x425fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x425FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425FECu;
        // 0x425ff0: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425fec) {
            ctx->pc = 0x426584u;
            goto label_426584;
        }
    }
    ctx->pc = 0x425FF4u;
label_425ff4:
    // 0x425ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x425ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425ff8: 0xc1092aa  jal         func_424AA8
    ctx->pc = 0x425FF8u;
    SET_GPR_U32(ctx, 31, 0x426000u);
    ctx->pc = 0x425FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425FF8u;
    // 0x425ffc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424AA8u, 0x425FF8u, 0x426000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426000u;
label_426000:
    // 0x426000: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x426000u;
    {
        const bool branch_taken_0x426000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426000u;
        // 0x426004: 0xa2200018  sb          $zero, 0x18($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426000) {
            ctx->pc = 0x426580u;
            goto label_426580;
        }
    }
    ctx->pc = 0x426008u;
label_426008:
    // 0x426008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x426008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42600c: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x42600cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x426010: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x426010u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x426014: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x426014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x426018: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x426018u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x42601c: 0x24c22400  addiu       $v0, $a2, 0x2400
    ctx->pc = 0x42601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 9216));
    // 0x426020: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x426020u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x426024: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x426024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426028: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x426028u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x42602c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x42602cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x426030: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x426030u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x426034: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x426034u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x426038: 0x8cc44000  lw          $a0, 0x4000($a2)
    ctx->pc = 0x426038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16384)));
    // 0x42603c: 0x8fa70064  lw          $a3, 0x64($sp)
    ctx->pc = 0x42603cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x426040: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x426040u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x426044: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x426044u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x426048: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x426048u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x42604c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x42604cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x426050: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x426050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x426054: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x426054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x426058: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x426058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x42605c: 0xa0400018  sb          $zero, 0x18($v0)
    ctx->pc = 0x42605cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x426060: 0xacc02400  sw          $zero, 0x2400($a2)
    ctx->pc = 0x426060u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 9216), GPR_U32(ctx, 0));
    // 0x426064: 0x8f86add0  lw          $a2, -0x5230($gp)
    ctx->pc = 0x426064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x426068: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x426068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x42606c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x42606cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x426070: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x426070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x426074: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x426074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x426078: 0xc1094b0  jal         func_4252C0
    ctx->pc = 0x426078u;
    SET_GPR_U32(ctx, 31, 0x426080u);
    ctx->pc = 0x42607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426078u;
    // 0x42607c: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4252C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4252C0u, 0x426078u, 0x426080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426080u;
label_426080:
    // 0x426080: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x426080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x426084: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x426084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x426088: 0xc4402414  lwc1        $f0, 0x2414($v0)
    ctx->pc = 0x426088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42608c: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x42608cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x426090: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x426090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x426094: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x426094u;
    {
        const bool branch_taken_0x426094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x426098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426094u;
        // 0x426098: 0xe4802000  swc1        $f0, 0x2000($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x426094) {
            ctx->pc = 0x42633Cu;
            goto label_42633c;
        }
    }
    ctx->pc = 0x42609Cu;
    // 0x42609c: 0x24852000  addiu       $a1, $a0, 0x2000
    ctx->pc = 0x42609cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8192));
    // 0x4260a0: 0x24932414  addiu       $s3, $a0, 0x2414
    ctx->pc = 0x4260a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 9236));
    // 0x4260a4: 0xafa5006c  sw          $a1, 0x6C($sp)
    ctx->pc = 0x4260a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 5));
    // 0x4260a8: 0x24970020  addiu       $s7, $a0, 0x20
    ctx->pc = 0x4260a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x4260ac: 0x249e2004  addiu       $fp, $a0, 0x2004
    ctx->pc = 0x4260acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 8196));
label_4260b0:
    // 0x4260b0: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x4260b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4260b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4260b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4260b8: 0x1ac00050  blez        $s6, . + 4 + (0x50 << 2)
    ctx->pc = 0x4260B8u;
    {
        const bool branch_taken_0x4260b8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x4260BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4260B8u;
        // 0x4260bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4260b8) {
            ctx->pc = 0x4261FCu;
            goto label_4261fc;
        }
    }
    ctx->pc = 0x4260C0u;
    // 0x4260c0: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x4260c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x4260c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4260c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4260c8: 0x32c30003  andi        $v1, $s6, 0x3
    ctx->pc = 0x4260c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
    // 0x4260cc: 0x1ac0001d  blez        $s6, . + 4 + (0x1D << 2)
    ctx->pc = 0x4260CCu;
    {
        const bool branch_taken_0x4260cc = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x4260D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4260CCu;
        // 0x4260d0: 0x24442000  addiu       $a0, $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4260cc) {
            ctx->pc = 0x426144u;
            goto label_426144;
        }
    }
    ctx->pc = 0x4260D4u;
    // 0x4260d4: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x4260D4u;
    {
        const bool branch_taken_0x4260d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4260D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4260D4u;
        // 0x4260d8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4260d4) {
            ctx->pc = 0x426170u;
            goto label_426170;
        }
    }
    ctx->pc = 0x4260DCu;
    // 0x4260dc: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x4260DCu;
    {
        const bool branch_taken_0x4260dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4260dc) {
            ctx->pc = 0x4260E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4260DCu;
            // 0x4260e0: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x426148u;
            goto label_426148;
        }
    }
    ctx->pc = 0x4260E4u;
    // 0x4260e4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4260e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4260e8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4260E8u;
    {
        const bool branch_taken_0x4260e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4260e8) {
            ctx->pc = 0x4260ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4260E8u;
            // 0x4260ec: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x426120u;
            goto label_426120;
        }
    }
    ctx->pc = 0x4260F0u;
    // 0x4260f0: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x4260f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x4260f4: 0xc4602000  lwc1        $f0, 0x2000($v1)
    ctx->pc = 0x4260f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4260f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4260f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4260fc: 0x0  nop
    ctx->pc = 0x4260fcu;
    // NOP
    // 0x426100: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x426100u;
    {
        const bool branch_taken_0x426100 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x426104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426100u;
        // 0x426104: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426100) {
            ctx->pc = 0x426110u;
            goto label_426110;
        }
    }
    ctx->pc = 0x426108u;
    // 0x426108: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x426108u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x42610c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x42610cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_426110:
    // 0x426110: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x426110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x426114: 0x24a42004  addiu       $a0, $a1, 0x2004
    ctx->pc = 0x426114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8196));
    // 0x426118: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x426118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42611c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x42611cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_426120:
    // 0x426120: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x426120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x426124: 0x0  nop
    ctx->pc = 0x426124u;
    // NOP
    // 0x426128: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x426128u;
    {
        const bool branch_taken_0x426128 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x426128) {
            ctx->pc = 0x42612Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x426128u;
            // 0x42612c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42613Cu;
            goto label_42613c;
        }
    }
    ctx->pc = 0x426130u;
    // 0x426130: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x426130u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x426134: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x426134u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426138: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x426138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_42613c:
    // 0x42613c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x42613cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x426140: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x426140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_426144:
    // 0x426144: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x426144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_426148:
    // 0x426148: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x426148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x42614c: 0x0  nop
    ctx->pc = 0x42614cu;
    // NOP
    // 0x426150: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x426150u;
    {
        const bool branch_taken_0x426150 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x426154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426150u;
        // 0x426154: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426150) {
            ctx->pc = 0x426160u;
            goto label_426160;
        }
    }
    ctx->pc = 0x426158u;
    // 0x426158: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x426158u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x42615c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x42615cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_426160:
    // 0x426160: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x426160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x426164: 0xb6102a  slt         $v0, $a1, $s6
    ctx->pc = 0x426164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x426168: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x426168u;
    {
        const bool branch_taken_0x426168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426168u;
        // 0x42616c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426168) {
            ctx->pc = 0x4261FCu;
            goto label_4261fc;
        }
    }
    ctx->pc = 0x426170u;
label_426170:
    // 0x426170: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x426170u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426174: 0x0  nop
    ctx->pc = 0x426174u;
    // NOP
label_426178:
    // 0x426178: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x426178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42617c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x42617cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x426180: 0x0  nop
    ctx->pc = 0x426180u;
    // NOP
    // 0x426184: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x426184u;
    {
        const bool branch_taken_0x426184 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x426184) {
            ctx->pc = 0x426188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x426184u;
            // 0x426188: 0xc4600004  lwc1        $f0, 0x4($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x426198u;
            goto label_426198;
        }
    }
    ctx->pc = 0x42618Cu;
    // 0x42618c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x42618cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x426190: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x426190u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426194: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x426194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_426198:
    // 0x426198: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x426198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x42619c: 0x0  nop
    ctx->pc = 0x42619cu;
    // NOP
    // 0x4261a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4261A0u;
    {
        const bool branch_taken_0x4261a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4261A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4261A0u;
        // 0x4261a4: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4261a0) {
            ctx->pc = 0x4261B0u;
            goto label_4261b0;
        }
    }
    ctx->pc = 0x4261A8u;
    // 0x4261a8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x4261a8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x4261ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4261acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4261b0:
    // 0x4261b0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x4261b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4261b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4261b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4261b8: 0x0  nop
    ctx->pc = 0x4261b8u;
    // NOP
    // 0x4261bc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4261BCu;
    {
        const bool branch_taken_0x4261bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4261C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4261BCu;
        // 0x4261c0: 0x24c20002  addiu       $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4261bc) {
            ctx->pc = 0x4261CCu;
            goto label_4261cc;
        }
    }
    ctx->pc = 0x4261C4u;
    // 0x4261c4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x4261c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x4261c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4261c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4261cc:
    // 0x4261cc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x4261ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4261d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4261d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4261d4: 0x0  nop
    ctx->pc = 0x4261d4u;
    // NOP
    // 0x4261d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x4261D8u;
    {
        const bool branch_taken_0x4261d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4261DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4261D8u;
        // 0x4261dc: 0x24c20003  addiu       $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4261d8) {
            ctx->pc = 0x4261E8u;
            goto label_4261e8;
        }
    }
    ctx->pc = 0x4261E0u;
    // 0x4261e0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x4261e0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x4261e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4261e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4261e8:
    // 0x4261e8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4261e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4261ec: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4261ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4261f0: 0xb6102a  slt         $v0, $a1, $s6
    ctx->pc = 0x4261f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x4261f4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x4261F4u;
    {
        const bool branch_taken_0x4261f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4261F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4261F4u;
        // 0x4261f8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4261f4) {
            ctx->pc = 0x426178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_426178;
        }
    }
    ctx->pc = 0x4261FCu;
label_4261fc:
    // 0x4261fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4261fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x426200: 0x1286004e  beq         $s4, $a2, . + 4 + (0x4E << 2)
    ctx->pc = 0x426200u;
    {
        const bool branch_taken_0x426200 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 6));
        ctx->pc = 0x426204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426200u;
        // 0x426204: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426200) {
            ctx->pc = 0x42633Cu;
            goto label_42633c;
        }
    }
    ctx->pc = 0x426208u;
    // 0x426208: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x426208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x42620c: 0x292a818  mult        $s5, $s4, $s2
    ctx->pc = 0x42620cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x426210: 0x141140  sll         $v0, $s4, 5
    ctx->pc = 0x426210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x426214: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x426214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x426218: 0x8c644000  lw          $a0, 0x4000($v1)
    ctx->pc = 0x426218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16384)));
    // 0x42621c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x42621cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426220: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x426220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426224: 0x26a52400  addiu       $a1, $s5, 0x2400
    ctx->pc = 0x426224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 9216));
    // 0x426228: 0xc10955c  jal         func_425570
    ctx->pc = 0x426228u;
    SET_GPR_U32(ctx, 31, 0x426230u);
    ctx->pc = 0x42622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426228u;
    // 0x42622c: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x425570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x425570u, 0x426228u, 0x426230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426230u;
label_426230:
    // 0x426230: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x426230u;
    {
        const bool branch_taken_0x426230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x426234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426230u;
        // 0x426234: 0x8fa40064  lw          $a0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426230) {
            ctx->pc = 0x426308u;
            goto label_426308;
        }
    }
    ctx->pc = 0x426238u;
    // 0x426238: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x426238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x42623c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x42623cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426240: 0x2a41021  addu        $v0, $s5, $a0
    ctx->pc = 0x426240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x426244: 0x8c844000  lw          $a0, 0x4000($a0)
    ctx->pc = 0x426244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16384)));
    // 0x426248: 0x24422400  addiu       $v0, $v0, 0x2400
    ctx->pc = 0x426248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9216));
    // 0x42624c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x42624cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x426250: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x426250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426254: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x426254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x426258: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x426258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x42625c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x42625cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x426260: 0xa0400018  sb          $zero, 0x18($v0)
    ctx->pc = 0x426260u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x426264: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x426264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x426268: 0x8f86add0  lw          $a2, -0x5230($gp)
    ctx->pc = 0x426268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x42626c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x42626cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x426270: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x426270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x426274: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x426274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x426278: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x426278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x42627c: 0xc1094b0  jal         func_4252C0
    ctx->pc = 0x42627Cu;
    SET_GPR_U32(ctx, 31, 0x426284u);
    ctx->pc = 0x426280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42627Cu;
    // 0x426280: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4252C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4252C0u, 0x42627Cu, 0x426284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426284u;
label_426284:
    // 0x426284: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x426284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x426288: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x426288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42628c: 0x600013  mtlo        $v1
    ctx->pc = 0x42628cu;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x426290: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x426290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426294: 0x72d21000  madd        $v0, $s6, $s2
    ctx->pc = 0x426294u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x426298: 0x8ca44000  lw          $a0, 0x4000($a1)
    ctx->pc = 0x426298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16384)));
    // 0x42629c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x42629cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x4262a0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4262a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4262a4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x4262a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x4262a8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x4262a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x4262ac: 0x24422400  addiu       $v0, $v0, 0x2400
    ctx->pc = 0x4262acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9216));
    // 0x4262b0: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4262b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x4262b4: 0xa0400018  sb          $zero, 0x18($v0)
    ctx->pc = 0x4262b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x4262b8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4262b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4262bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4262bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4262c0: 0x8f86add0  lw          $a2, -0x5230($gp)
    ctx->pc = 0x4262c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x4262c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4262c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4262c8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4262c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x4262cc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x4262ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x4262d0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x4262d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x4262d4: 0xc1094b0  jal         func_4252C0
    ctx->pc = 0x4262D4u;
    SET_GPR_U32(ctx, 31, 0x4262DCu);
    ctx->pc = 0x4262D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4262D4u;
    // 0x4262d8: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4252C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4252C0u, 0x4262D4u, 0x4262DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4262DCu;
label_4262dc:
    // 0x4262dc: 0x2751821  addu        $v1, $s3, $s5
    ctx->pc = 0x4262dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x4262e0: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x4262e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x4262e4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x4262e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4262e8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x4262e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x4262ec: 0x2d21818  mult        $v1, $s6, $s2
    ctx->pc = 0x4262ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4262f0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4262f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4262f4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x4262f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4262f8: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x4262f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x4262fc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x4262fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x426300: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x426300u;
    {
        const bool branch_taken_0x426300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426300u;
        // 0x426304: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x426300) {
            ctx->pc = 0x426324u;
            goto label_426324;
        }
    }
    ctx->pc = 0x426308u;
label_426308:
    // 0x426308: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x426308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x42630c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x42630cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x426310: 0x27defffc  addiu       $fp, $fp, -0x4
    ctx->pc = 0x426310u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
    // 0x426314: 0x26f7ffe0  addiu       $s7, $s7, -0x20
    ctx->pc = 0x426314u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967264));
    // 0x426318: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x426318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x42631c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x42631cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x426320: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x426320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_426324:
    // 0x426324: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x426324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x426328: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x426328u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x42632c: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x42632cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x426330: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x426330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x426334: 0x1440ff5e  bnez        $v0, . + 4 + (-0xA2 << 2)
    ctx->pc = 0x426334u;
    {
        const bool branch_taken_0x426334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x426338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426334u;
        // 0x426338: 0x26f70020  addiu       $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426334) {
            ctx->pc = 0x4260B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4260b0;
        }
    }
    ctx->pc = 0x42633Cu;
label_42633c:
    // 0x42633c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x42633cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x426340: 0x1880008f  blez        $a0, . + 4 + (0x8F << 2)
    ctx->pc = 0x426340u;
    {
        const bool branch_taken_0x426340 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x426344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426340u;
        // 0x426344: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426340) {
            ctx->pc = 0x426580u;
            goto label_426580;
        }
    }
    ctx->pc = 0x426348u;
    // 0x426348: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x426348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x42634c: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x42634cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426350: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x426350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x426354: 0x24b32400  addiu       $s3, $a1, 0x2400
    ctx->pc = 0x426354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 9216));
    // 0x426358: 0x1880002c  blez        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x426358u;
    {
        const bool branch_taken_0x426358 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x42635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426358u;
        // 0x42635c: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426358) {
            ctx->pc = 0x42640Cu;
            goto label_42640c;
        }
    }
    ctx->pc = 0x426360u;
    // 0x426360: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x426360u;
    {
        const bool branch_taken_0x426360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x426364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426360u;
        // 0x426364: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426360) {
            ctx->pc = 0x42646Cu;
            goto label_42646c;
        }
    }
    ctx->pc = 0x426368u;
    // 0x426368: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x426368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x42636c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x42636Cu;
    {
        const bool branch_taken_0x42636c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x426370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42636Cu;
        // 0x426370: 0x8fa20064  lw          $v0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42636c) {
            ctx->pc = 0x426410u;
            goto label_426410;
        }
    }
    ctx->pc = 0x426374u;
    // 0x426374: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x426374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x426378: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x426378u;
    {
        const bool branch_taken_0x426378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426378u;
        // 0x42637c: 0x8fa60064  lw          $a2, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426378) {
            ctx->pc = 0x4263C8u;
            goto label_4263c8;
        }
    }
    ctx->pc = 0x426380u;
    // 0x426380: 0x8ee44000  lw          $a0, 0x4000($s7)
    ctx->pc = 0x426380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16384)));
    // 0x426384: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x426384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x426388: 0x8f86add0  lw          $a2, -0x5230($gp)
    ctx->pc = 0x426388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x42638c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x42638cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426390: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x426390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x426394: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x426394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426398: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x426398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x42639c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x42639cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4263a0: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x4263a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x4263a4: 0xc109420  jal         func_425080
    ctx->pc = 0x4263A4u;
    SET_GPR_U32(ctx, 31, 0x4263ACu);
    ctx->pc = 0x4263A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4263A4u;
    // 0x4263a8: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x425080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x425080u, 0x4263A4u, 0x4263ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4263ACu;
label_4263ac:
    // 0x4263ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4263acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4263b0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4263b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4263b4: 0xc1092aa  jal         func_424AA8
    ctx->pc = 0x4263B4u;
    SET_GPR_U32(ctx, 31, 0x4263BCu);
    ctx->pc = 0x4263B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4263B4u;
    // 0x4263b8: 0x26f3241c  addiu       $s3, $s7, 0x241C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 9244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424AA8u, 0x4263B4u, 0x4263BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4263BCu;
label_4263bc:
    // 0x4263bc: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x4263bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x4263c0: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x4263c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x4263c4: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x4263c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_4263c8:
    // 0x4263c8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4263c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4263cc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4263ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4263d0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4263d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4263d4: 0x8cc44000  lw          $a0, 0x4000($a2)
    ctx->pc = 0x4263d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16384)));
    // 0x4263d8: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x4263d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x4263dc: 0x8f86add0  lw          $a2, -0x5230($gp)
    ctx->pc = 0x4263dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x4263e0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4263e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x4263e4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x4263e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x4263e8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x4263e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x4263ec: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x4263ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x4263f0: 0xc109420  jal         func_425080
    ctx->pc = 0x4263F0u;
    SET_GPR_U32(ctx, 31, 0x4263F8u);
    ctx->pc = 0x4263F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4263F0u;
    // 0x4263f4: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x425080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x425080u, 0x4263F0u, 0x4263F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4263F8u;
label_4263f8:
    // 0x4263f8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4263f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4263fc: 0xc1092aa  jal         func_424AA8
    ctx->pc = 0x4263FCu;
    SET_GPR_U32(ctx, 31, 0x426404u);
    ctx->pc = 0x426400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4263FCu;
    // 0x426400: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424AA8u, 0x4263FCu, 0x426404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426404u;
label_426404:
    // 0x426404: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x426404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x426408: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x426408u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_42640c:
    // 0x42640c: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x42640cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_426410:
    // 0x426410: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x426410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x426414: 0x8f86add0  lw          $a2, -0x5230($gp)
    ctx->pc = 0x426414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x426418: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x426418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42641c: 0x8c444000  lw          $a0, 0x4000($v0)
    ctx->pc = 0x42641cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16384)));
    // 0x426420: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x426420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426424: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x426424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x426428: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x426428u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x42642c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x42642cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x426430: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x426430u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x426434: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x426434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x426438: 0xc109420  jal         func_425080
    ctx->pc = 0x426438u;
    SET_GPR_U32(ctx, 31, 0x426440u);
    ctx->pc = 0x42643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426438u;
    // 0x42643c: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x425080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x425080u, 0x426438u, 0x426440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426440u;
label_426440:
    // 0x426440: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x426440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426444: 0xc1092aa  jal         func_424AA8
    ctx->pc = 0x426444u;
    SET_GPR_U32(ctx, 31, 0x42644Cu);
    ctx->pc = 0x426448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426444u;
    // 0x426448: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424AA8u, 0x426444u, 0x42644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42644Cu;
label_42644c:
    // 0x42644c: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x42644cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x426450: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x426450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x426454: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x426454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x426458: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x426458u;
    {
        const bool branch_taken_0x426458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426458u;
        // 0x42645c: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426458) {
            ctx->pc = 0x426580u;
            goto label_426580;
        }
    }
    ctx->pc = 0x426460u;
    // 0x426460: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x426460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x426464: 0x0  nop
    ctx->pc = 0x426464u;
    // NOP
label_426468:
    // 0x426468: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x426468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_42646c:
    // 0x42646c: 0x8f86add0  lw          $a2, -0x5230($gp)
    ctx->pc = 0x42646cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x426470: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x426470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426474: 0x8ca44000  lw          $a0, 0x4000($a1)
    ctx->pc = 0x426474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16384)));
    // 0x426478: 0x2671001c  addiu       $s1, $s3, 0x1C
    ctx->pc = 0x426478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x42647c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x42647cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x426480: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x426480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x426484: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x426484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x426488: 0x27d00004  addiu       $s0, $fp, 0x4
    ctx->pc = 0x426488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x42648c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x42648cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x426490: 0x26740038  addiu       $s4, $s3, 0x38
    ctx->pc = 0x426490u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x426494: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x426494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x426498: 0xc109420  jal         func_425080
    ctx->pc = 0x426498u;
    SET_GPR_U32(ctx, 31, 0x4264A0u);
    ctx->pc = 0x42649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426498u;
    // 0x42649c: 0x27d20008  addiu       $s2, $fp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x425080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x425080u, 0x426498u, 0x4264A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4264A0u;
label_4264a0:
    // 0x4264a0: 0x26750054  addiu       $s5, $s3, 0x54
    ctx->pc = 0x4264a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
    // 0x4264a4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4264a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4264a8: 0xc1092aa  jal         func_424AA8
    ctx->pc = 0x4264A8u;
    SET_GPR_U32(ctx, 31, 0x4264B0u);
    ctx->pc = 0x4264ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4264A8u;
    // 0x4264ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424AA8u, 0x4264A8u, 0x4264B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4264B0u;
label_4264b0:
    // 0x4264b0: 0x26730070  addiu       $s3, $s3, 0x70
    ctx->pc = 0x4264b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x4264b4: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x4264b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x4264b8: 0x27c2000c  addiu       $v0, $fp, 0xC
    ctx->pc = 0x4264b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    // 0x4264bc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4264bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4264c0: 0x26e70020  addiu       $a3, $s7, 0x20
    ctx->pc = 0x4264c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x4264c4: 0x8cc44000  lw          $a0, 0x4000($a2)
    ctx->pc = 0x4264c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16384)));
    // 0x4264c8: 0x26c80001  addiu       $t0, $s6, 0x1
    ctx->pc = 0x4264c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x4264cc: 0x8f86add0  lw          $a2, -0x5230($gp)
    ctx->pc = 0x4264ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x4264d0: 0x27de0010  addiu       $fp, $fp, 0x10
    ctx->pc = 0x4264d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x4264d4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x4264d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x4264d8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x4264d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x4264dc: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x4264dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x4264e0: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x4264e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x4264e4: 0xc109420  jal         func_425080
    ctx->pc = 0x4264E4u;
    SET_GPR_U32(ctx, 31, 0x4264ECu);
    ctx->pc = 0x4264E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4264E4u;
    // 0x4264e8: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x425080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x425080u, 0x4264E4u, 0x4264ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4264ECu;
label_4264ec:
    // 0x4264ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4264ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4264f0: 0xc1092aa  jal         func_424AA8
    ctx->pc = 0x4264F0u;
    SET_GPR_U32(ctx, 31, 0x4264F8u);
    ctx->pc = 0x4264F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4264F0u;
    // 0x4264f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424AA8u, 0x4264F0u, 0x4264F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4264F8u;
label_4264f8:
    // 0x4264f8: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x4264f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x4264fc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4264fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x426500: 0x8f86add0  lw          $a2, -0x5230($gp)
    ctx->pc = 0x426500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x426504: 0x26e70040  addiu       $a3, $s7, 0x40
    ctx->pc = 0x426504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
    // 0x426508: 0x8c644000  lw          $a0, 0x4000($v1)
    ctx->pc = 0x426508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16384)));
    // 0x42650c: 0x26c80002  addiu       $t0, $s6, 0x2
    ctx->pc = 0x42650cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x426510: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x426510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x426514: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x426514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x426518: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x426518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x42651c: 0xc109420  jal         func_425080
    ctx->pc = 0x42651Cu;
    SET_GPR_U32(ctx, 31, 0x426524u);
    ctx->pc = 0x426520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42651Cu;
    // 0x426520: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x425080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x425080u, 0x42651Cu, 0x426524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426524u;
label_426524:
    // 0x426524: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x426524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426528: 0xc1092aa  jal         func_424AA8
    ctx->pc = 0x426528u;
    SET_GPR_U32(ctx, 31, 0x426530u);
    ctx->pc = 0x42652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426528u;
    // 0x42652c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424AA8u, 0x426528u, 0x426530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426530u;
label_426530:
    // 0x426530: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x426530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x426534: 0x26e70060  addiu       $a3, $s7, 0x60
    ctx->pc = 0x426534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 96));
    // 0x426538: 0x8f86add0  lw          $a2, -0x5230($gp)
    ctx->pc = 0x426538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
    // 0x42653c: 0x26c80003  addiu       $t0, $s6, 0x3
    ctx->pc = 0x42653cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 3));
    // 0x426540: 0x8ca44000  lw          $a0, 0x4000($a1)
    ctx->pc = 0x426540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16384)));
    // 0x426544: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x426544u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x426548: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x426548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x42654c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x42654cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x426550: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x426550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x426554: 0x26f70080  addiu       $s7, $s7, 0x80
    ctx->pc = 0x426554u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 128));
    // 0x426558: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x426558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x42655c: 0xc109420  jal         func_425080
    ctx->pc = 0x42655Cu;
    SET_GPR_U32(ctx, 31, 0x426564u);
    ctx->pc = 0x426560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42655Cu;
    // 0x426560: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x425080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x425080u, 0x42655Cu, 0x426564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426564u;
label_426564:
    // 0x426564: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x426564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x426568: 0xc1092aa  jal         func_424AA8
    ctx->pc = 0x426568u;
    SET_GPR_U32(ctx, 31, 0x426570u);
    ctx->pc = 0x42656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426568u;
    // 0x42656c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424AA8u, 0x426568u, 0x426570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426570u;
label_426570:
    // 0x426570: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x426570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x426574: 0x2c6102a  slt         $v0, $s6, $a2
    ctx->pc = 0x426574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x426578: 0x5440ffbb  bnel        $v0, $zero, . + 4 + (-0x45 << 2)
    ctx->pc = 0x426578u;
    {
        const bool branch_taken_0x426578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x426578) {
            ctx->pc = 0x42657Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x426578u;
            // 0x42657c: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x426468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_426468;
        }
    }
    ctx->pc = 0x426580u;
label_426580:
    // 0x426580: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x426580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_426584:
    // 0x426584: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x426584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x426588: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x426588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x42658c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x42658cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x426590: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x426590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x426594: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x426594u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x426598: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x426598u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x42659c: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x42659cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4265a0: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x4265a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4265a4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4265a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4265a8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4265a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4265ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4265ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4265B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4265ACu;
        // 0x4265b0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4265ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4265B4u;
    // 0x4265b4: 0x0  nop
    ctx->pc = 0x4265b4u;
    // NOP
    ctx->pc = 0x4265b8u;
}
