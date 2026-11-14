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

// Function: sub_0029AC30
// Address: 0x29ac30 - 0x29b270
void sub_0029AC30_0x29ac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AC30_0x29ac30");
#endif

    switch (ctx->pc) {
        case 0x29ac90u: goto label_29ac90;
        case 0x29ac9cu: goto label_29ac9c;
        case 0x29aca8u: goto label_29aca8;
        case 0x29ace4u: goto label_29ace4;
        case 0x29ad04u: goto label_29ad04;
        case 0x29ad14u: goto label_29ad14;
        case 0x29ad20u: goto label_29ad20;
        case 0x29ad30u: goto label_29ad30;
        case 0x29ad54u: goto label_29ad54;
        case 0x29ad64u: goto label_29ad64;
        case 0x29ad78u: goto label_29ad78;
        case 0x29ad90u: goto label_29ad90;
        case 0x29adc4u: goto label_29adc4;
        case 0x29ade0u: goto label_29ade0;
        case 0x29adecu: goto label_29adec;
        case 0x29adfcu: goto label_29adfc;
        case 0x29ae14u: goto label_29ae14;
        case 0x29ae28u: goto label_29ae28;
        case 0x29ae54u: goto label_29ae54;
        case 0x29ae68u: goto label_29ae68;
        case 0x29ae7cu: goto label_29ae7c;
        case 0x29aeb4u: goto label_29aeb4;
        case 0x29aed4u: goto label_29aed4;
        case 0x29aee0u: goto label_29aee0;
        case 0x29aef8u: goto label_29aef8;
        case 0x29af0cu: goto label_29af0c;
        case 0x29af28u: goto label_29af28;
        case 0x29af34u: goto label_29af34;
        case 0x29af48u: goto label_29af48;
        case 0x29af54u: goto label_29af54;
        case 0x29afe4u: goto label_29afe4;
        case 0x29b010u: goto label_29b010;
        case 0x29b024u: goto label_29b024;
        case 0x29b098u: goto label_29b098;
        case 0x29b0a8u: goto label_29b0a8;
        case 0x29b0e8u: goto label_29b0e8;
        case 0x29b0fcu: goto label_29b0fc;
        case 0x29b114u: goto label_29b114;
        case 0x29b140u: goto label_29b140;
        case 0x29b180u: goto label_29b180;
        case 0x29b1f8u: goto label_29b1f8;
        case 0x29b214u: goto label_29b214;
        case 0x29b224u: goto label_29b224;
        case 0x29b234u: goto label_29b234;
        default: break;
    }

    ctx->pc = 0x29ac30u;

    // 0x29ac30: 0x27bdfc30  addiu       $sp, $sp, -0x3D0
    ctx->pc = 0x29ac30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966320));
    // 0x29ac34: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x29ac34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x29ac38: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x29ac38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x29ac3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29ac3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x29ac40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29ac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29ac44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29ac44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29ac48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29ac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29ac4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29ac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29ac50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29ac50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29ac54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ac54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29ac58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29ac5c: 0xafa403b0  sw          $a0, 0x3B0($sp)
    ctx->pc = 0x29ac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 4));
    // 0x29ac60: 0xa3a503c0  sb          $a1, 0x3C0($sp)
    ctx->pc = 0x29ac60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 960), (uint8_t)GPR_U32(ctx, 5));
    // 0x29ac64: 0x93a203c0  lbu         $v0, 0x3C0($sp)
    ctx->pc = 0x29ac64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x29ac68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29ac68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29ac6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ac70: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29AC70u;
    {
        const bool branch_taken_0x29ac70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29ac70) {
            ctx->pc = 0x29AC84u;
            goto label_29ac84;
        }
    }
    ctx->pc = 0x29AC78u;
    // 0x29ac78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29ac78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac7c: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x29AC7Cu;
    {
        const bool branch_taken_0x29ac7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ac7c) {
            ctx->pc = 0x29B238u;
            goto label_29b238;
        }
    }
    ctx->pc = 0x29AC84u;
label_29ac84:
    // 0x29ac84: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x29ac84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x29ac88: 0xc08dea4  jal         func_237A90
    ctx->pc = 0x29AC88u;
    SET_GPR_U32(ctx, 31, 0x29AC90u);
    ctx->pc = 0x237A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237A90u, 0x29AC88u, 0x29AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AC90u;
label_29ac90:
    // 0x29ac90: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x29ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x29ac94: 0xc041b48  jal         func_106D20
    ctx->pc = 0x29AC94u;
    SET_GPR_U32(ctx, 31, 0x29AC9Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x29AC94u, 0x29AC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AC9Cu;
label_29ac9c:
    // 0x29ac9c: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x29ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x29aca0: 0xc041b48  jal         func_106D20
    ctx->pc = 0x29ACA0u;
    SET_GPR_U32(ctx, 31, 0x29ACA8u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x29ACA0u, 0x29ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ACA8u;
label_29aca8:
    // 0x29aca8: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x29aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x29acac: 0x2463d7b0  addiu       $v1, $v1, -0x2850
    ctx->pc = 0x29acacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956976));
    // 0x29acb0: 0x27a20350  addiu       $v0, $sp, 0x350
    ctx->pc = 0x29acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x29acb4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x29acb4u;
    { uint32_t bits = FAST_READ32(0x4ED7B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29acb8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x29acb8u;
    { uint32_t bits = FAST_READ32(0x4ED7B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29acbc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x29acbcu;
    { uint32_t bits = FAST_READ32(0x4ED7B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29acc0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x29acc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29acc4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x29acc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x29acc8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x29acc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x29accc: 0x27a203a8  addiu       $v0, $sp, 0x3A8
    ctx->pc = 0x29acccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 936));
    // 0x29acd0: 0xc780a338  lwc1        $f0, -0x5CC8($gp)
    ctx->pc = 0x29acd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29acd4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29acd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x29acd8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x29acd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29acdc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x29ACDCu;
    {
        const bool branch_taken_0x29acdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29acdc) {
            ctx->pc = 0x29AE90u;
            goto label_29ae90;
        }
    }
    ctx->pc = 0x29ACE4u;
label_29ace4:
    // 0x29ace4: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x29ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x29ace8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29acec: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x29acecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x29acf0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x29acf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x29acf4: 0x24a5d7c0  addiu       $a1, $a1, -0x2840
    ctx->pc = 0x29acf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956992));
    // 0x29acf8: 0x8c460350  lw          $a2, 0x350($v0)
    ctx->pc = 0x29acf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x29acfc: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x29ACFCu;
    SET_GPR_U32(ctx, 31, 0x29AD04u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x29ACFCu, 0x29AD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD04u;
label_29ad04:
    // 0x29ad04: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x29ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x29ad08: 0x2785a33c  addiu       $a1, $gp, -0x5CC4
    ctx->pc = 0x29ad08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943548));
    // 0x29ad0c: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x29AD0Cu;
    SET_GPR_U32(ctx, 31, 0x29AD14u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x29AD0Cu, 0x29AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD14u;
label_29ad14:
    // 0x29ad14: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x29ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x29ad18: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x29AD18u;
    SET_GPR_U32(ctx, 31, 0x29AD20u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x29AD18u, 0x29AD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD20u;
label_29ad20:
    // 0x29ad20: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x29ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x29ad24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29ad24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad28: 0xc08ded4  jal         func_237B50
    ctx->pc = 0x29AD28u;
    SET_GPR_U32(ctx, 31, 0x29AD30u);
    ctx->pc = 0x237B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237B50u, 0x29AD28u, 0x29AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD30u;
label_29ad30:
    // 0x29ad30: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29ad30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29ad34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ad34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ad38: 0x14620054  bne         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x29AD38u;
    {
        const bool branch_taken_0x29ad38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29ad38) {
            ctx->pc = 0x29AE8Cu;
            goto label_29ae8c;
        }
    }
    ctx->pc = 0x29AD40u;
    // 0x29ad40: 0x2782a340  addiu       $v0, $gp, -0x5CC0
    ctx->pc = 0x29ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943552));
    // 0x29ad44: 0xafa203a4  sw          $v0, 0x3A4($sp)
    ctx->pc = 0x29ad44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 932), GPR_U32(ctx, 2));
    // 0x29ad48: 0xafa003a0  sw          $zero, 0x3A0($sp)
    ctx->pc = 0x29ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 0));
    // 0x29ad4c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x29AD4Cu;
    {
        const bool branch_taken_0x29ad4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ad4c) {
            ctx->pc = 0x29AE68u;
            goto label_29ae68;
        }
    }
    ctx->pc = 0x29AD54u;
label_29ad54:
    // 0x29ad54: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x29ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x29ad58: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x29ad58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x29ad5c: 0xc0bc510  jal         func_2F1440
    ctx->pc = 0x29AD5Cu;
    SET_GPR_U32(ctx, 31, 0x29AD64u);
    ctx->pc = 0x2F1440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1440u, 0x29AD5Cu, 0x29AD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD64u;
label_29ad64:
    // 0x29ad64: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29ad64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad68: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x29ad68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29ad6c: 0x2785a344  addiu       $a1, $gp, -0x5CBC
    ctx->pc = 0x29ad6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943556));
    // 0x29ad70: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x29AD70u;
    SET_GPR_U32(ctx, 31, 0x29AD78u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x29AD70u, 0x29AD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD78u;
label_29ad78:
    // 0x29ad78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29AD78u;
    {
        const bool branch_taken_0x29ad78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ad78) {
            ctx->pc = 0x29AD98u;
            goto label_29ad98;
        }
    }
    ctx->pc = 0x29AD80u;
    // 0x29ad80: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x29ad80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29ad84: 0x2785a348  addiu       $a1, $gp, -0x5CB8
    ctx->pc = 0x29ad84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943560));
    // 0x29ad88: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x29AD88u;
    SET_GPR_U32(ctx, 31, 0x29AD90u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x29AD88u, 0x29AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD90u;
label_29ad90:
    // 0x29ad90: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x29AD90u;
    {
        const bool branch_taken_0x29ad90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ad90) {
            ctx->pc = 0x29AE68u;
            goto label_29ae68;
        }
    }
    ctx->pc = 0x29AD98u;
label_29ad98:
    // 0x29ad98: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x29AD98u;
    {
        const bool branch_taken_0x29ad98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ad98) {
            ctx->pc = 0x29ADA4u;
            goto label_29ada4;
        }
    }
    ctx->pc = 0x29ADA0u;
    // 0x29ada0: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x29ada0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
label_29ada4:
    // 0x29ada4: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x29ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x29ada8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x29ada8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29adac: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x29ADACu;
    {
        const bool branch_taken_0x29adac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29adac) {
            ctx->pc = 0x29AE68u;
            goto label_29ae68;
        }
    }
    ctx->pc = 0x29ADB4u;
    // 0x29adb4: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x29adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x29adb8: 0x2785a34c  addiu       $a1, $gp, -0x5CB4
    ctx->pc = 0x29adb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943564));
    // 0x29adbc: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x29ADBCu;
    SET_GPR_U32(ctx, 31, 0x29ADC4u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x29ADBCu, 0x29ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ADC4u;
label_29adc4:
    // 0x29adc4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x29ADC4u;
    {
        const bool branch_taken_0x29adc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29adc4) {
            ctx->pc = 0x29AE68u;
            goto label_29ae68;
        }
    }
    ctx->pc = 0x29ADCCu;
    // 0x29adcc: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x29adccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x29add0: 0x2785a350  addiu       $a1, $gp, -0x5CB0
    ctx->pc = 0x29add0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943568));
    // 0x29add4: 0x8fa603a0  lw          $a2, 0x3A0($sp)
    ctx->pc = 0x29add4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x29add8: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x29ADD8u;
    SET_GPR_U32(ctx, 31, 0x29ADE0u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x29ADD8u, 0x29ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ADE0u;
label_29ade0:
    // 0x29ade0: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x29ade0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x29ade4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x29ADE4u;
    SET_GPR_U32(ctx, 31, 0x29ADECu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x29ADE4u, 0x29ADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ADECu;
label_29adec:
    // 0x29adec: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x29adecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x29adf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29adf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29adf4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x29ADF4u;
    SET_GPR_U32(ctx, 31, 0x29ADFCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x29ADF4u, 0x29ADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ADFCu;
label_29adfc:
    // 0x29adfc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x29adfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae00: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x29AE00u;
    {
        const bool branch_taken_0x29ae00 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ae00) {
            ctx->pc = 0x29AE2Cu;
            goto label_29ae2c;
        }
    }
    ctx->pc = 0x29AE08u;
    // 0x29ae08: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x29ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x29ae0c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x29AE0Cu;
    SET_GPR_U32(ctx, 31, 0x29AE14u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x29AE0Cu, 0x29AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AE14u;
label_29ae14:
    // 0x29ae14: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29ae14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29ae18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae1c: 0x27a603a8  addiu       $a2, $sp, 0x3A8
    ctx->pc = 0x29ae1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 936));
    // 0x29ae20: 0xc0a66ec  jal         func_299BB0
    ctx->pc = 0x29AE20u;
    SET_GPR_U32(ctx, 31, 0x29AE28u);
    ctx->pc = 0x299BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299BB0u, 0x29AE20u, 0x29AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AE28u;
label_29ae28:
    // 0x29ae28: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x29ae28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29ae2c:
    // 0x29ae2c: 0xafb7039c  sw          $s7, 0x39C($sp)
    ctx->pc = 0x29ae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 924), GPR_U32(ctx, 23));
    // 0x29ae30: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x29AE30u;
    {
        const bool branch_taken_0x29ae30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ae30) {
            ctx->pc = 0x29AE3Cu;
            goto label_29ae3c;
        }
    }
    ctx->pc = 0x29AE38u;
    // 0x29ae38: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x29ae38u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
label_29ae3c:
    // 0x29ae3c: 0x8fa2039c  lw          $v0, 0x39C($sp)
    ctx->pc = 0x29ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 924)));
    // 0x29ae40: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x29ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x29ae44: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x29ae44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x29ae48: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x29ae48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x29ae4c: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x29AE4Cu;
    SET_GPR_U32(ctx, 31, 0x29AE54u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x29AE4Cu, 0x29AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AE54u;
label_29ae54:
    // 0x29ae54: 0x8fa403b0  lw          $a0, 0x3B0($sp)
    ctx->pc = 0x29ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x29ae58: 0x8fa5039c  lw          $a1, 0x39C($sp)
    ctx->pc = 0x29ae58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 924)));
    // 0x29ae5c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x29ae5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae60: 0xc0a69fc  jal         func_29A7F0
    ctx->pc = 0x29AE60u;
    SET_GPR_U32(ctx, 31, 0x29AE68u);
    ctx->pc = 0x29A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A7F0u, 0x29AE60u, 0x29AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AE68u;
label_29ae68:
    // 0x29ae68: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x29ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x29ae6c: 0x27a503a0  addiu       $a1, $sp, 0x3A0
    ctx->pc = 0x29ae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x29ae70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29ae70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae74: 0xc08dee4  jal         func_237B90
    ctx->pc = 0x29AE74u;
    SET_GPR_U32(ctx, 31, 0x29AE7Cu);
    ctx->pc = 0x237B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237B90u, 0x29AE74u, 0x29AE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AE7Cu;
label_29ae7c:
    // 0x29ae7c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29ae7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29ae80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ae84: 0x1062ffb3  beq         $v1, $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x29AE84u;
    {
        const bool branch_taken_0x29ae84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29ae84) {
            ctx->pc = 0x29AD54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ad54;
        }
    }
    ctx->pc = 0x29AE8Cu;
label_29ae8c:
    // 0x29ae8c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x29ae8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_29ae90:
    // 0x29ae90: 0x2ec20003  sltiu       $v0, $s6, 0x3
    ctx->pc = 0x29ae90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x29ae94: 0x1440ff93  bnez        $v0, . + 4 + (-0x6D << 2)
    ctx->pc = 0x29AE94u;
    {
        const bool branch_taken_0x29ae94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ae94) {
            ctx->pc = 0x29ACE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ace4;
        }
    }
    ctx->pc = 0x29AE9Cu;
    // 0x29ae9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29ae9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aea0: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x29aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x29aea4: 0x2484d7f0  addiu       $a0, $a0, -0x2810
    ctx->pc = 0x29aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957040));
    // 0x29aea8: 0x2785a354  addiu       $a1, $gp, -0x5CAC
    ctx->pc = 0x29aea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943572));
    // 0x29aeac: 0xc0f0ab6  jal         func_3C2AD8
    ctx->pc = 0x29AEACu;
    SET_GPR_U32(ctx, 31, 0x29AEB4u);
    ctx->pc = 0x3C2AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AD8u, 0x29AEACu, 0x29AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AEB4u;
label_29aeb4:
    // 0x29aeb4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29aeb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aeb8: 0x101400c9  beq         $zero, $s4, . + 4 + (0xC9 << 2)
    ctx->pc = 0x29AEB8u;
    {
        const bool branch_taken_0x29aeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x29aeb8) {
            ctx->pc = 0x29B1E0u;
            goto label_29b1e0;
        }
    }
    ctx->pc = 0x29AEC0u;
    // 0x29aec0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29aec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29aec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aec8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29aec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29aecc: 0xc0f0b30  jal         func_3C2CC0
    ctx->pc = 0x29AECCu;
    SET_GPR_U32(ctx, 31, 0x29AED4u);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x29AECCu, 0x29AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AED4u;
label_29aed4:
    // 0x29aed4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29aed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aed8: 0xc0f0ba4  jal         func_3C2E90
    ctx->pc = 0x29AED8u;
    SET_GPR_U32(ctx, 31, 0x29AEE0u);
    ctx->pc = 0x3C2E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E90u, 0x29AED8u, 0x29AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AEE0u;
label_29aee0:
    // 0x29aee0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x29aee0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aee4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29aee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29aee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aeec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29aeecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aef0: 0xc0f0b30  jal         func_3C2CC0
    ctx->pc = 0x29AEF0u;
    SET_GPR_U32(ctx, 31, 0x29AEF8u);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x29AEF0u, 0x29AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AEF8u;
label_29aef8:
    // 0x29aef8: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x29aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x29aefc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29aefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af00: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x29af00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af04: 0xc0a6cb4  jal         func_29B2D0
    ctx->pc = 0x29AF04u;
    SET_GPR_U32(ctx, 31, 0x29AF0Cu);
    ctx->pc = 0x29B2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B2D0u, 0x29AF04u, 0x29AF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AF0Cu;
label_29af0c:
    // 0x29af0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29af0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29af10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29af14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29af18: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x29af18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af1c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x29af1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af20: 0xc0f0b08  jal         func_3C2C20
    ctx->pc = 0x29AF20u;
    SET_GPR_U32(ctx, 31, 0x29AF28u);
    ctx->pc = 0x3C2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2C20u, 0x29AF20u, 0x29AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AF28u;
label_29af28:
    // 0x29af28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29af28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af2c: 0xc0f0af2  jal         func_3C2BC8
    ctx->pc = 0x29AF2Cu;
    SET_GPR_U32(ctx, 31, 0x29AF34u);
    ctx->pc = 0x3C2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2BC8u, 0x29AF2Cu, 0x29AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AF34u;
label_29af34:
    // 0x29af34: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x29af34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29af38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af3c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x29af3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af40: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x29AF40u;
    {
        const bool branch_taken_0x29af40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29af40) {
            ctx->pc = 0x29B1D0u;
            goto label_29b1d0;
        }
    }
    ctx->pc = 0x29AF48u;
label_29af48:
    // 0x29af48: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x29af48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29AF4Cu;
    {
        const bool branch_taken_0x29af4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29af4c) {
            ctx->pc = 0x29AF58u;
            goto label_29af58;
        }
    }
    ctx->pc = 0x29AF54u;
label_29af54:
    // 0x29af54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29af54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29af58:
    // 0x29af58: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x29af58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29af5c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x29af5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x29af60: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x29af60u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x29af64: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x29af64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29af68: 0x1062fffa  beq         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29AF68u;
    {
        const bool branch_taken_0x29af68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29af68) {
            ctx->pc = 0x29AF54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29af54;
        }
    }
    ctx->pc = 0x29AF70u;
    // 0x29af70: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x29af70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29af74: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x29af74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x29af78: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x29af78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x29af7c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x29af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29af80: 0x1062fff4  beq         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x29AF80u;
    {
        const bool branch_taken_0x29af80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29af80) {
            ctx->pc = 0x29AF54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29af54;
        }
    }
    ctx->pc = 0x29AF88u;
    // 0x29af88: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x29af88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29af8c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x29af8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x29af90: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x29af90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x29af94: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x29af94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x29af98: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29AF98u;
    {
        const bool branch_taken_0x29af98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29af98) {
            ctx->pc = 0x29AFD4u;
            goto label_29afd4;
        }
    }
    ctx->pc = 0x29AFA0u;
    // 0x29afa0: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x29afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x29afa4: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x29AFA4u;
    {
        const bool branch_taken_0x29afa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29afa4) {
            ctx->pc = 0x29B180u;
            goto label_29b180;
        }
    }
    ctx->pc = 0x29AFACu;
    // 0x29afac: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x29AFACu;
    {
        const bool branch_taken_0x29afac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29afac) {
            ctx->pc = 0x29B180u;
            goto label_29b180;
        }
    }
    ctx->pc = 0x29AFB4u;
    // 0x29afb4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x29afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29afb8: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x29AFB8u;
    {
        const bool branch_taken_0x29afb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29afb8) {
            ctx->pc = 0x29B180u;
            goto label_29b180;
        }
    }
    ctx->pc = 0x29AFC0u;
    // 0x29afc0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x29afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29afc4: 0x1062006e  beq         $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x29AFC4u;
    {
        const bool branch_taken_0x29afc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29afc4) {
            ctx->pc = 0x29B180u;
            goto label_29b180;
        }
    }
    ctx->pc = 0x29AFCCu;
    // 0x29afcc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x29AFCCu;
    {
        const bool branch_taken_0x29afcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29afcc) {
            ctx->pc = 0x29B01Cu;
            goto label_29b01c;
        }
    }
    ctx->pc = 0x29AFD4u;
label_29afd4:
    // 0x29afd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29afd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29afd8: 0x2785a358  addiu       $a1, $gp, -0x5CA8
    ctx->pc = 0x29afd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943576));
    // 0x29afdc: 0xc0bc7ee  jal         func_2F1FB8
    ctx->pc = 0x29AFDCu;
    SET_GPR_U32(ctx, 31, 0x29AFE4u);
    ctx->pc = 0x2F1FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1FB8u, 0x29AFDCu, 0x29AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AFE4u;
label_29afe4:
    // 0x29afe4: 0xafa20398  sw          $v0, 0x398($sp)
    ctx->pc = 0x29afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 920), GPR_U32(ctx, 2));
    // 0x29afe8: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x29afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
    // 0x29afec: 0x10020003  beq         $zero, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29AFECu;
    {
        const bool branch_taken_0x29afec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x29afec) {
            ctx->pc = 0x29AFFCu;
            goto label_29affc;
        }
    }
    ctx->pc = 0x29AFF4u;
    // 0x29aff4: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x29aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
    // 0x29aff8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x29aff8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_29affc:
    // 0x29affc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29affcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29b000: 0x8fa403b0  lw          $a0, 0x3B0($sp)
    ctx->pc = 0x29b000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x29b004: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29b004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b008: 0xc0a69c4  jal         func_29A710
    ctx->pc = 0x29B008u;
    SET_GPR_U32(ctx, 31, 0x29B010u);
    ctx->pc = 0x29A710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A710u, 0x29B008u, 0x29B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B010u;
label_29b010:
    // 0x29b010: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x29b010u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b014: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x29B014u;
    {
        const bool branch_taken_0x29b014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b014) {
            ctx->pc = 0x29B180u;
            goto label_29b180;
        }
    }
    ctx->pc = 0x29B01Cu;
label_29b01c:
    // 0x29b01c: 0x141e0017  bne         $zero, $fp, . + 4 + (0x17 << 2)
    ctx->pc = 0x29B01Cu;
    {
        const bool branch_taken_0x29b01c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 30));
        if (branch_taken_0x29b01c) {
            ctx->pc = 0x29B07Cu;
            goto label_29b07c;
        }
    }
    ctx->pc = 0x29B024u;
label_29b024:
    // 0x29b024: 0x2121023  subu        $v0, $s0, $s2
    ctx->pc = 0x29b024u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x29b028: 0x55082a  slt         $at, $v0, $s5
    ctx->pc = 0x29b028u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x29b02c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x29B02Cu;
    {
        const bool branch_taken_0x29b02c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b02c) {
            ctx->pc = 0x29B070u;
            goto label_29b070;
        }
    }
    ctx->pc = 0x29B034u;
    // 0x29b034: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x29b034u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b038: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x29b038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x29b03c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x29b03cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x29b040: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x29b040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29b044: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29B044u;
    {
        const bool branch_taken_0x29b044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29b044) {
            ctx->pc = 0x29B064u;
            goto label_29b064;
        }
    }
    ctx->pc = 0x29B04Cu;
    // 0x29b04c: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x29b04cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29b050: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x29b050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x29b054: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x29b054u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x29b058: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x29b058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29b05c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B05Cu;
    {
        const bool branch_taken_0x29b05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29b05c) {
            ctx->pc = 0x29B070u;
            goto label_29b070;
        }
    }
    ctx->pc = 0x29B064u;
label_29b064:
    // 0x29b064: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29b064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29b068: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x29B068u;
    {
        const bool branch_taken_0x29b068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b068) {
            ctx->pc = 0x29B024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b024;
        }
    }
    ctx->pc = 0x29B070u;
label_29b070:
    // 0x29b070: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x29b070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x29b074: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x29B074u;
    {
        const bool branch_taken_0x29b074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b074) {
            ctx->pc = 0x29B1D0u;
            goto label_29b1d0;
        }
    }
    ctx->pc = 0x29B07Cu;
label_29b07c:
    // 0x29b07c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29b07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b080: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x29b080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x29b084: 0x24a5d820  addiu       $a1, $a1, -0x27E0
    ctx->pc = 0x29b084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957088));
    // 0x29b088: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x29b088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x29b08c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x29b08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29b090: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x29B090u;
    SET_GPR_U32(ctx, 31, 0x29B098u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x29B090u, 0x29B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B098u;
label_29b098:
    // 0x29b098: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x29b098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x29b09c: 0x2785a360  addiu       $a1, $gp, -0x5CA0
    ctx->pc = 0x29b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943584));
    // 0x29b0a0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x29B0A0u;
    SET_GPR_U32(ctx, 31, 0x29B0A8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x29B0A0u, 0x29B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B0A8u;
label_29b0a8:
    // 0x29b0a8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29B0A8u;
    {
        const bool branch_taken_0x29b0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b0a8) {
            ctx->pc = 0x29B104u;
            goto label_29b104;
        }
    }
    ctx->pc = 0x29B0B0u;
    // 0x29b0b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29b0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b0b8: 0x0  nop
    ctx->pc = 0x29b0b8u;
    // NOP
    // 0x29b0bc: 0xe7a00394  swc1        $f0, 0x394($sp)
    ctx->pc = 0x29b0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 916), bits); }
    // 0x29b0c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29b0c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b0c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b0c8: 0x0  nop
    ctx->pc = 0x29b0c8u;
    // NOP
    // 0x29b0cc: 0xe7a00390  swc1        $f0, 0x390($sp)
    ctx->pc = 0x29b0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 912), bits); }
    // 0x29b0d0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x29b0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29b0d4: 0x2785a368  addiu       $a1, $gp, -0x5C98
    ctx->pc = 0x29b0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943592));
    // 0x29b0d8: 0x27a60394  addiu       $a2, $sp, 0x394
    ctx->pc = 0x29b0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 916));
    // 0x29b0dc: 0x27a70390  addiu       $a3, $sp, 0x390
    ctx->pc = 0x29b0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x29b0e0: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x29B0E0u;
    SET_GPR_U32(ctx, 31, 0x29B0E8u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x29B0E0u, 0x29B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B0E8u;
label_29b0e8:
    // 0x29b0e8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x29b0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b0ec: 0xc7ac0394  lwc1        $f12, 0x394($sp)
    ctx->pc = 0x29b0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29b0f0: 0xc7ad0390  lwc1        $f13, 0x390($sp)
    ctx->pc = 0x29b0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29b0f4: 0xc0a66bc  jal         func_299AF0
    ctx->pc = 0x29B0F4u;
    SET_GPR_U32(ctx, 31, 0x29B0FCu);
    ctx->pc = 0x299AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299AF0u, 0x29B0F4u, 0x29B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B0FCu;
label_29b0fc:
    // 0x29b0fc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x29B0FCu;
    {
        const bool branch_taken_0x29b0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b0fc) {
            ctx->pc = 0x29B180u;
            goto label_29b180;
        }
    }
    ctx->pc = 0x29B104u;
label_29b104:
    // 0x29b104: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x29b104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x29b108: 0x2785a370  addiu       $a1, $gp, -0x5C90
    ctx->pc = 0x29b108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943600));
    // 0x29b10c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x29B10Cu;
    SET_GPR_U32(ctx, 31, 0x29B114u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x29B10Cu, 0x29B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B114u;
label_29b114:
    // 0x29b114: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x29B114u;
    {
        const bool branch_taken_0x29b114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b114) {
            ctx->pc = 0x29B180u;
            goto label_29b180;
        }
    }
    ctx->pc = 0x29B11Cu;
    // 0x29b11c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x29b11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29b120: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x29b120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x29b124: 0x24a5d838  addiu       $a1, $a1, -0x27C8
    ctx->pc = 0x29b124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957112));
    // 0x29b128: 0x27a6038c  addiu       $a2, $sp, 0x38C
    ctx->pc = 0x29b128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 908));
    // 0x29b12c: 0x27a70388  addiu       $a3, $sp, 0x388
    ctx->pc = 0x29b12cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 904));
    // 0x29b130: 0x27a80384  addiu       $t0, $sp, 0x384
    ctx->pc = 0x29b130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 900));
    // 0x29b134: 0x27a90380  addiu       $t1, $sp, 0x380
    ctx->pc = 0x29b134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x29b138: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x29B138u;
    SET_GPR_U32(ctx, 31, 0x29B140u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x29B138u, 0x29B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B140u;
label_29b140:
    // 0x29b140: 0x8fa2038c  lw          $v0, 0x38C($sp)
    ctx->pc = 0x29b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 908)));
    // 0x29b144: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29b144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29b148: 0xa3a2037c  sb          $v0, 0x37C($sp)
    ctx->pc = 0x29b148u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 892), (uint8_t)GPR_U32(ctx, 2));
    // 0x29b14c: 0x8fa20388  lw          $v0, 0x388($sp)
    ctx->pc = 0x29b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
    // 0x29b150: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29b150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29b154: 0xa3a2037d  sb          $v0, 0x37D($sp)
    ctx->pc = 0x29b154u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 893), (uint8_t)GPR_U32(ctx, 2));
    // 0x29b158: 0x8fa20384  lw          $v0, 0x384($sp)
    ctx->pc = 0x29b158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 900)));
    // 0x29b15c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29b15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29b160: 0xa3a2037e  sb          $v0, 0x37E($sp)
    ctx->pc = 0x29b160u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 894), (uint8_t)GPR_U32(ctx, 2));
    // 0x29b164: 0x8fa20380  lw          $v0, 0x380($sp)
    ctx->pc = 0x29b164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x29b168: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29b168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29b16c: 0xa3a2037f  sb          $v0, 0x37F($sp)
    ctx->pc = 0x29b16cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 895), (uint8_t)GPR_U32(ctx, 2));
    // 0x29b170: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x29b170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b174: 0x27a5037c  addiu       $a1, $sp, 0x37C
    ctx->pc = 0x29b174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 892));
    // 0x29b178: 0xc0a6654  jal         func_299950
    ctx->pc = 0x29B178u;
    SET_GPR_U32(ctx, 31, 0x29B180u);
    ctx->pc = 0x299950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299950u, 0x29B178u, 0x29B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B180u;
label_29b180:
    // 0x29b180: 0x2121023  subu        $v0, $s0, $s2
    ctx->pc = 0x29b180u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x29b184: 0x55082a  slt         $at, $v0, $s5
    ctx->pc = 0x29b184u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x29b188: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x29B188u;
    {
        const bool branch_taken_0x29b188 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b188) {
            ctx->pc = 0x29B1CCu;
            goto label_29b1cc;
        }
    }
    ctx->pc = 0x29B190u;
    // 0x29b190: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x29b190u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b194: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x29b194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x29b198: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x29b198u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x29b19c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x29b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29b1a0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29B1A0u;
    {
        const bool branch_taken_0x29b1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29b1a0) {
            ctx->pc = 0x29B1C0u;
            goto label_29b1c0;
        }
    }
    ctx->pc = 0x29B1A8u;
    // 0x29b1a8: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x29b1a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29b1ac: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x29b1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x29b1b0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x29b1b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x29b1b4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x29b1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29b1b8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B1B8u;
    {
        const bool branch_taken_0x29b1b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29b1b8) {
            ctx->pc = 0x29B1CCu;
            goto label_29b1cc;
        }
    }
    ctx->pc = 0x29B1C0u;
label_29b1c0:
    // 0x29b1c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29b1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29b1c4: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x29B1C4u;
    {
        const bool branch_taken_0x29b1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b1c4) {
            ctx->pc = 0x29B180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b180;
        }
    }
    ctx->pc = 0x29B1CCu;
label_29b1cc:
    // 0x29b1cc: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x29b1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_29b1d0:
    // 0x29b1d0: 0x2121023  subu        $v0, $s0, $s2
    ctx->pc = 0x29b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x29b1d4: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x29b1d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x29b1d8: 0x1440ff5b  bnez        $v0, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x29B1D8u;
    {
        const bool branch_taken_0x29b1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b1d8) {
            ctx->pc = 0x29AF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29af48;
        }
    }
    ctx->pc = 0x29B1E0u;
label_29b1e0:
    // 0x29b1e0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B1E0u;
    {
        const bool branch_taken_0x29b1e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b1e0) {
            ctx->pc = 0x29B1FCu;
            goto label_29b1fc;
        }
    }
    ctx->pc = 0x29B1E8u;
    // 0x29b1e8: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x29b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x29b1ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29b1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b1f0: 0xc0a6c9c  jal         func_29B270
    ctx->pc = 0x29B1F0u;
    SET_GPR_U32(ctx, 31, 0x29B1F8u);
    ctx->pc = 0x29B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B270u, 0x29B1F0u, 0x29B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B1F8u;
label_29b1f8:
    // 0x29b1f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29b1f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b1fc:
    // 0x29b1fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b200: 0xa3a203af  sb          $v0, 0x3AF($sp)
    ctx->pc = 0x29b200u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 943), (uint8_t)GPR_U32(ctx, 2));
    // 0x29b204: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x29b204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x29b208: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29b208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29b20c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x29B20Cu;
    SET_GPR_U32(ctx, 31, 0x29B214u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x29B20Cu, 0x29B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B214u;
label_29b214:
    // 0x29b214: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x29b214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x29b218: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29b218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29b21c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x29B21Cu;
    SET_GPR_U32(ctx, 31, 0x29B224u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x29B21Cu, 0x29B224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B224u;
label_29b224:
    // 0x29b224: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x29b224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x29b228: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29b228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29b22c: 0xc08deb0  jal         func_237AC0
    ctx->pc = 0x29B22Cu;
    SET_GPR_U32(ctx, 31, 0x29B234u);
    ctx->pc = 0x237AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237AC0u, 0x29B22Cu, 0x29B234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B234u;
label_29b234:
    // 0x29b234: 0x93a203af  lbu         $v0, 0x3AF($sp)
    ctx->pc = 0x29b234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 943)));
label_29b238:
    // 0x29b238: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x29b238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29b23c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29b23cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29b240: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29b240u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29b244: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29b244u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29b248: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29b248u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29b24c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29b24cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b250: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29b250u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b254: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29b254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b258: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b25c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b260: 0x27bd03d0  addiu       $sp, $sp, 0x3D0
    ctx->pc = 0x29b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
    // 0x29b264: 0x3e00008  jr          $ra
    ctx->pc = 0x29B264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B26Cu;
    // 0x29b26c: 0x0  nop
    ctx->pc = 0x29b26cu;
    // NOP
    ctx->pc = 0x29b270u;
}
