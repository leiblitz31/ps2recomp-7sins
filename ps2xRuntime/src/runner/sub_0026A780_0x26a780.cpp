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

// Function: sub_0026A780
// Address: 0x26a780 - 0x26af10
void sub_0026A780_0x26a780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A780_0x26a780");
#endif

    switch (ctx->pc) {
        case 0x26a7bcu: goto label_26a7bc;
        case 0x26a7c8u: goto label_26a7c8;
        case 0x26a7d8u: goto label_26a7d8;
        case 0x26a7f4u: goto label_26a7f4;
        case 0x26a80cu: goto label_26a80c;
        case 0x26a818u: goto label_26a818;
        case 0x26a828u: goto label_26a828;
        case 0x26a840u: goto label_26a840;
        case 0x26a85cu: goto label_26a85c;
        case 0x26a874u: goto label_26a874;
        case 0x26a88cu: goto label_26a88c;
        case 0x26a8b4u: goto label_26a8b4;
        case 0x26a8ccu: goto label_26a8cc;
        case 0x26a8d8u: goto label_26a8d8;
        case 0x26a8e8u: goto label_26a8e8;
        case 0x26a8f4u: goto label_26a8f4;
        case 0x26a908u: goto label_26a908;
        case 0x26a914u: goto label_26a914;
        case 0x26a92cu: goto label_26a92c;
        case 0x26a938u: goto label_26a938;
        case 0x26a950u: goto label_26a950;
        case 0x26a960u: goto label_26a960;
        case 0x26a96cu: goto label_26a96c;
        case 0x26a97cu: goto label_26a97c;
        case 0x26a994u: goto label_26a994;
        case 0x26a9b0u: goto label_26a9b0;
        case 0x26a9bcu: goto label_26a9bc;
        case 0x26a9ccu: goto label_26a9cc;
        case 0x26a9e4u: goto label_26a9e4;
        case 0x26aa00u: goto label_26aa00;
        case 0x26aa1cu: goto label_26aa1c;
        case 0x26aa34u: goto label_26aa34;
        case 0x26aa5cu: goto label_26aa5c;
        case 0x26aa74u: goto label_26aa74;
        case 0x26aa80u: goto label_26aa80;
        case 0x26aa90u: goto label_26aa90;
        case 0x26aa9cu: goto label_26aa9c;
        case 0x26aab0u: goto label_26aab0;
        case 0x26aabcu: goto label_26aabc;
        case 0x26aad4u: goto label_26aad4;
        case 0x26aae0u: goto label_26aae0;
        case 0x26aaf8u: goto label_26aaf8;
        case 0x26ab08u: goto label_26ab08;
        case 0x26ab14u: goto label_26ab14;
        case 0x26ab24u: goto label_26ab24;
        case 0x26ab3cu: goto label_26ab3c;
        case 0x26ab58u: goto label_26ab58;
        case 0x26ab64u: goto label_26ab64;
        case 0x26ab74u: goto label_26ab74;
        case 0x26ab8cu: goto label_26ab8c;
        case 0x26aba8u: goto label_26aba8;
        case 0x26abc0u: goto label_26abc0;
        case 0x26abd8u: goto label_26abd8;
        case 0x26ac00u: goto label_26ac00;
        case 0x26ac18u: goto label_26ac18;
        case 0x26ac24u: goto label_26ac24;
        case 0x26ac34u: goto label_26ac34;
        case 0x26ac40u: goto label_26ac40;
        case 0x26ac54u: goto label_26ac54;
        case 0x26ac60u: goto label_26ac60;
        case 0x26ac78u: goto label_26ac78;
        case 0x26ac84u: goto label_26ac84;
        case 0x26ac9cu: goto label_26ac9c;
        case 0x26acacu: goto label_26acac;
        case 0x26ad10u: goto label_26ad10;
        case 0x26ad1cu: goto label_26ad1c;
        case 0x26ad2cu: goto label_26ad2c;
        case 0x26ad44u: goto label_26ad44;
        case 0x26ad64u: goto label_26ad64;
        case 0x26ad70u: goto label_26ad70;
        case 0x26ad80u: goto label_26ad80;
        case 0x26ad98u: goto label_26ad98;
        case 0x26adb4u: goto label_26adb4;
        case 0x26add4u: goto label_26add4;
        case 0x26adecu: goto label_26adec;
        case 0x26ae14u: goto label_26ae14;
        case 0x26ae2cu: goto label_26ae2c;
        case 0x26ae38u: goto label_26ae38;
        case 0x26ae48u: goto label_26ae48;
        case 0x26ae54u: goto label_26ae54;
        case 0x26ae68u: goto label_26ae68;
        case 0x26ae74u: goto label_26ae74;
        case 0x26ae8cu: goto label_26ae8c;
        case 0x26ae98u: goto label_26ae98;
        case 0x26aeb0u: goto label_26aeb0;
        case 0x26aec0u: goto label_26aec0;
        default: break;
    }

    ctx->pc = 0x26a780u;

    // 0x26a780: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x26a780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x26a784: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26a784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26a788: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x26a788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x26a78c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26a78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x26a790: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x26a790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x26a794: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26a794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26a798: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26a798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26a79c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26a79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26a7a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26a7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26a7a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a7a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a7ac: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x26a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x26a7b0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x26a7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26a7b4: 0xc09a698  jal         func_269A60
    ctx->pc = 0x26A7B4u;
    SET_GPR_U32(ctx, 31, 0x26A7BCu);
    ctx->pc = 0x269A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269A60u, 0x26A7B4u, 0x26A7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A7BCu;
label_26a7bc:
    // 0x26a7bc: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x26a7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x26a7c0: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x26A7C0u;
    SET_GPR_U32(ctx, 31, 0x26A7C8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x26A7C0u, 0x26A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A7C8u;
label_26a7c8:
    // 0x26a7c8: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x26a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x26a7cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a7d0: 0xc0400e0  jal         func_100380
    ctx->pc = 0x26A7D0u;
    SET_GPR_U32(ctx, 31, 0x26A7D8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x26A7D0u, 0x26A7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A7D8u;
label_26a7d8:
    // 0x26a7d8: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x26a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x26a7dc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x26a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x26a7e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A7E0u;
    {
        const bool branch_taken_0x26a7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a7e0) {
            ctx->pc = 0x26A7F8u;
            goto label_26a7f8;
        }
    }
    ctx->pc = 0x26A7E8u;
    // 0x26a7e8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x26a7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x26a7ec: 0xc0995d0  jal         func_265740
    ctx->pc = 0x26A7ECu;
    SET_GPR_U32(ctx, 31, 0x26A7F4u);
    ctx->pc = 0x265740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265740u, 0x26A7ECu, 0x26A7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A7F4u;
label_26a7f4:
    // 0x26a7f4: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x26a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_26a7f8:
    // 0x26a7f8: 0x8fb000c8  lw          $s0, 0xC8($sp)
    ctx->pc = 0x26a7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x26a7fc: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x26a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x26a800: 0x2785a0e0  addiu       $a1, $gp, -0x5F20
    ctx->pc = 0x26a800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942944));
    // 0x26a804: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x26A804u;
    SET_GPR_U32(ctx, 31, 0x26A80Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x26A804u, 0x26A80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A80Cu;
label_26a80c:
    // 0x26a80c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x26a80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26a810: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x26A810u;
    SET_GPR_U32(ctx, 31, 0x26A818u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x26A810u, 0x26A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A818u;
label_26a818:
    // 0x26a818: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x26a818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26a81c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a820: 0xc0400e0  jal         func_100380
    ctx->pc = 0x26A820u;
    SET_GPR_U32(ctx, 31, 0x26A828u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x26A820u, 0x26A828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A828u;
label_26a828:
    // 0x26a828: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x26a828u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a82c: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A82Cu;
    {
        const bool branch_taken_0x26a82c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a82c) {
            ctx->pc = 0x26A844u;
            goto label_26a844;
        }
    }
    ctx->pc = 0x26A834u;
    // 0x26a834: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26a834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a838: 0xc09d084  jal         func_274210
    ctx->pc = 0x26A838u;
    SET_GPR_U32(ctx, 31, 0x26A840u);
    ctx->pc = 0x274210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274210u, 0x26A838u, 0x26A840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A840u;
label_26a840:
    // 0x26a840: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x26a840u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a844:
    // 0x26a844: 0xafbe00cc  sw          $fp, 0xCC($sp)
    ctx->pc = 0x26a844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 30));
    // 0x26a848: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26a848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26a84c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x26a84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26a850: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26a850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a854: 0xc09d0c0  jal         func_274300
    ctx->pc = 0x26A854u;
    SET_GPR_U32(ctx, 31, 0x26A85Cu);
    ctx->pc = 0x274300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274300u, 0x26A854u, 0x26A85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A85Cu;
label_26a85c:
    // 0x26a85c: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26a85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26a860: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26a860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26a864: 0x24a5ce60  addiu       $a1, $a1, -0x31A0
    ctx->pc = 0x26a864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954592));
    // 0x26a868: 0x2786a0e8  addiu       $a2, $gp, -0x5F18
    ctx->pc = 0x26a868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942952));
    // 0x26a86c: 0xc041b90  jal         func_106E40
    ctx->pc = 0x26A86Cu;
    SET_GPR_U32(ctx, 31, 0x26A874u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x26A86Cu, 0x26A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A874u;
label_26a874:
    // 0x26a874: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26a874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26a878: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26a878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26a87c: 0x24a5ce70  addiu       $a1, $a1, -0x3190
    ctx->pc = 0x26a87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954608));
    // 0x26a880: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26a880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a884: 0xc047314  jal         func_11CC50
    ctx->pc = 0x26A884u;
    SET_GPR_U32(ctx, 31, 0x26A88Cu);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x26A884u, 0x26A88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A88Cu;
label_26a88c:
    // 0x26a88c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x26a890: 0x344286a0  ori         $v0, $v0, 0x86A0
    ctx->pc = 0x26a890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
    // 0x26a894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a898: 0x0  nop
    ctx->pc = 0x26a898u;
    // NOP
    // 0x26a89c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x26a89cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x26a8a0: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26a8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26a8a4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26a8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26a8a8: 0x24a5ce80  addiu       $a1, $a1, -0x3180
    ctx->pc = 0x26a8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954624));
    // 0x26a8ac: 0xc051414  jal         func_145050
    ctx->pc = 0x26A8ACu;
    SET_GPR_U32(ctx, 31, 0x26A8B4u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x26A8ACu, 0x26A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A8B4u;
label_26a8b4:
    // 0x26a8b4: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26a8b8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26a8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26a8bc: 0x24a5ce98  addiu       $a1, $a1, -0x3168
    ctx->pc = 0x26a8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954648));
    // 0x26a8c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26a8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a8c4: 0xc041b24  jal         func_106C90
    ctx->pc = 0x26A8C4u;
    SET_GPR_U32(ctx, 31, 0x26A8CCu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x26A8C4u, 0x26A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A8CCu;
label_26a8cc:
    // 0x26a8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8d0: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x26A8D0u;
    SET_GPR_U32(ctx, 31, 0x26A8D8u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x26A8D0u, 0x26A8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A8D8u;
label_26a8d8:
    // 0x26a8d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26a8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8dc: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x26a8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x26a8e0: 0xc099c4c  jal         func_267130
    ctx->pc = 0x26A8E0u;
    SET_GPR_U32(ctx, 31, 0x26A8E8u);
    ctx->pc = 0x267130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267130u, 0x26A8E0u, 0x26A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A8E8u;
label_26a8e8:
    // 0x26a8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8ec: 0xc048094  jal         func_120250
    ctx->pc = 0x26A8ECu;
    SET_GPR_U32(ctx, 31, 0x26A8F4u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26A8ECu, 0x26A8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A8F4u;
label_26a8f4:
    // 0x26a8f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26a8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8f8: 0x24050402  addiu       $a1, $zero, 0x402
    ctx->pc = 0x26a8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    // 0x26a8fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26a8fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a900: 0xc040924  jal         func_102490
    ctx->pc = 0x26A900u;
    SET_GPR_U32(ctx, 31, 0x26A908u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x26A900u, 0x26A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A908u;
label_26a908:
    // 0x26a908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a90c: 0xc048094  jal         func_120250
    ctx->pc = 0x26A90Cu;
    SET_GPR_U32(ctx, 31, 0x26A914u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26A90Cu, 0x26A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A914u;
label_26a914:
    // 0x26a914: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26a914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a918: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26a918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26a91c: 0x24a5cea8  addiu       $a1, $a1, -0x3158
    ctx->pc = 0x26a91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954664));
    // 0x26a920: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26a920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a924: 0xc041b24  jal         func_106C90
    ctx->pc = 0x26A924u;
    SET_GPR_U32(ctx, 31, 0x26A92Cu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x26A924u, 0x26A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A92Cu;
label_26a92c:
    // 0x26a92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a930: 0xc048094  jal         func_120250
    ctx->pc = 0x26A930u;
    SET_GPR_U32(ctx, 31, 0x26A938u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26A930u, 0x26A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A938u;
label_26a938:
    // 0x26a938: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26a938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a93c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26a93cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26a940: 0x24a5ceb8  addiu       $a1, $a1, -0x3148
    ctx->pc = 0x26a940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954680));
    // 0x26a944: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26a944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a948: 0xc041b24  jal         func_106C90
    ctx->pc = 0x26A948u;
    SET_GPR_U32(ctx, 31, 0x26A950u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x26A948u, 0x26A950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A950u;
label_26a950:
    // 0x26a950: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x26a950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26a954: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a958: 0xc09a468  jal         func_2691A0
    ctx->pc = 0x26A958u;
    SET_GPR_U32(ctx, 31, 0x26A960u);
    ctx->pc = 0x2691A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2691A0u, 0x26A958u, 0x26A960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A960u;
label_26a960:
    // 0x26a960: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x26a960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x26a964: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x26A964u;
    SET_GPR_U32(ctx, 31, 0x26A96Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x26A964u, 0x26A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A96Cu;
label_26a96c:
    // 0x26a96c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x26a96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x26a970: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a974: 0xc0400e0  jal         func_100380
    ctx->pc = 0x26A974u;
    SET_GPR_U32(ctx, 31, 0x26A97Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x26A974u, 0x26A97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A97Cu;
label_26a97c:
    // 0x26a97c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26a97cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a980: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A980u;
    {
        const bool branch_taken_0x26a980 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a980) {
            ctx->pc = 0x26A998u;
            goto label_26a998;
        }
    }
    ctx->pc = 0x26A988u;
    // 0x26a988: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26a988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a98c: 0xc0995d0  jal         func_265740
    ctx->pc = 0x26A98Cu;
    SET_GPR_U32(ctx, 31, 0x26A994u);
    ctx->pc = 0x265740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265740u, 0x26A98Cu, 0x26A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A994u;
label_26a994:
    // 0x26a994: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26a994u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a998:
    // 0x26a998: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x26a998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a99c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x26a99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x26a9a0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26a9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26a9a4: 0x24a5cec8  addiu       $a1, $a1, -0x3138
    ctx->pc = 0x26a9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954696));
    // 0x26a9a8: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x26A9A8u;
    SET_GPR_U32(ctx, 31, 0x26A9B0u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x26A9A8u, 0x26A9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A9B0u;
label_26a9b0:
    // 0x26a9b0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x26a9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26a9b4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x26A9B4u;
    SET_GPR_U32(ctx, 31, 0x26A9BCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x26A9B4u, 0x26A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A9BCu;
label_26a9bc:
    // 0x26a9bc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x26a9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26a9c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a9c4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x26A9C4u;
    SET_GPR_U32(ctx, 31, 0x26A9CCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x26A9C4u, 0x26A9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A9CCu;
label_26a9cc:
    // 0x26a9cc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26a9ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a9d0: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A9D0u;
    {
        const bool branch_taken_0x26a9d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a9d0) {
            ctx->pc = 0x26A9E8u;
            goto label_26a9e8;
        }
    }
    ctx->pc = 0x26A9D8u;
    // 0x26a9d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26a9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a9dc: 0xc09d084  jal         func_274210
    ctx->pc = 0x26A9DCu;
    SET_GPR_U32(ctx, 31, 0x26A9E4u);
    ctx->pc = 0x274210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274210u, 0x26A9DCu, 0x26A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A9E4u;
label_26a9e4:
    // 0x26a9e4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26a9e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a9e8:
    // 0x26a9e8: 0xafb600cc  sw          $s6, 0xCC($sp)
    ctx->pc = 0x26a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 22));
    // 0x26a9ec: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26a9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26a9f0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x26a9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26a9f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26a9f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a9f8: 0xc09d0c0  jal         func_274300
    ctx->pc = 0x26A9F8u;
    SET_GPR_U32(ctx, 31, 0x26AA00u);
    ctx->pc = 0x274300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274300u, 0x26A9F8u, 0x26AA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA00u;
label_26aa00:
    // 0x26aa00: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26aa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26aa04: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26aa04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26aa08: 0x24a5ce60  addiu       $a1, $a1, -0x31A0
    ctx->pc = 0x26aa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954592));
    // 0x26aa0c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x26aa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x26aa10: 0x24c6cee0  addiu       $a2, $a2, -0x3120
    ctx->pc = 0x26aa10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954720));
    // 0x26aa14: 0xc041b90  jal         func_106E40
    ctx->pc = 0x26AA14u;
    SET_GPR_U32(ctx, 31, 0x26AA1Cu);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x26AA14u, 0x26AA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA1Cu;
label_26aa1c:
    // 0x26aa1c: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26aa20: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26aa20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26aa24: 0x24a5ce70  addiu       $a1, $a1, -0x3190
    ctx->pc = 0x26aa24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954608));
    // 0x26aa28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26aa28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26aa2c: 0xc047314  jal         func_11CC50
    ctx->pc = 0x26AA2Cu;
    SET_GPR_U32(ctx, 31, 0x26AA34u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x26AA2Cu, 0x26AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA34u;
label_26aa34:
    // 0x26aa34: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x26aa38: 0x344286a0  ori         $v0, $v0, 0x86A0
    ctx->pc = 0x26aa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
    // 0x26aa3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26aa3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26aa40: 0x0  nop
    ctx->pc = 0x26aa40u;
    // NOP
    // 0x26aa44: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x26aa44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x26aa48: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26aa48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26aa4c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26aa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26aa50: 0x24a5ce80  addiu       $a1, $a1, -0x3180
    ctx->pc = 0x26aa50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954624));
    // 0x26aa54: 0xc051414  jal         func_145050
    ctx->pc = 0x26AA54u;
    SET_GPR_U32(ctx, 31, 0x26AA5Cu);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x26AA54u, 0x26AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA5Cu;
label_26aa5c:
    // 0x26aa5c: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26aa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26aa60: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26aa60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26aa64: 0x24a5ce98  addiu       $a1, $a1, -0x3168
    ctx->pc = 0x26aa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954648));
    // 0x26aa68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26aa68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26aa6c: 0xc041b24  jal         func_106C90
    ctx->pc = 0x26AA6Cu;
    SET_GPR_U32(ctx, 31, 0x26AA74u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x26AA6Cu, 0x26AA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA74u;
label_26aa74:
    // 0x26aa74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26aa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa78: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x26AA78u;
    SET_GPR_U32(ctx, 31, 0x26AA80u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x26AA78u, 0x26AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA80u;
label_26aa80:
    // 0x26aa80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26aa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa84: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x26aa84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x26aa88: 0xc099c4c  jal         func_267130
    ctx->pc = 0x26AA88u;
    SET_GPR_U32(ctx, 31, 0x26AA90u);
    ctx->pc = 0x267130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267130u, 0x26AA88u, 0x26AA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA90u;
label_26aa90:
    // 0x26aa90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26aa90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa94: 0xc048094  jal         func_120250
    ctx->pc = 0x26AA94u;
    SET_GPR_U32(ctx, 31, 0x26AA9Cu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26AA94u, 0x26AA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AA9Cu;
label_26aa9c:
    // 0x26aa9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26aa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aaa0: 0x24050402  addiu       $a1, $zero, 0x402
    ctx->pc = 0x26aaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    // 0x26aaa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26aaa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aaa8: 0xc040924  jal         func_102490
    ctx->pc = 0x26AAA8u;
    SET_GPR_U32(ctx, 31, 0x26AAB0u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x26AAA8u, 0x26AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AAB0u;
label_26aab0:
    // 0x26aab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26aab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aab4: 0xc048094  jal         func_120250
    ctx->pc = 0x26AAB4u;
    SET_GPR_U32(ctx, 31, 0x26AABCu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26AAB4u, 0x26AABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AABCu;
label_26aabc:
    // 0x26aabc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26aabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aac0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26aac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26aac4: 0x24a5cea8  addiu       $a1, $a1, -0x3158
    ctx->pc = 0x26aac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954664));
    // 0x26aac8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26aac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26aacc: 0xc041b24  jal         func_106C90
    ctx->pc = 0x26AACCu;
    SET_GPR_U32(ctx, 31, 0x26AAD4u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x26AACCu, 0x26AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AAD4u;
label_26aad4:
    // 0x26aad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26aad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aad8: 0xc048094  jal         func_120250
    ctx->pc = 0x26AAD8u;
    SET_GPR_U32(ctx, 31, 0x26AAE0u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26AAD8u, 0x26AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AAE0u;
label_26aae0:
    // 0x26aae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26aae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aae4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26aae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26aae8: 0x24a5ceb8  addiu       $a1, $a1, -0x3148
    ctx->pc = 0x26aae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954680));
    // 0x26aaec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26aaecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aaf0: 0xc041b24  jal         func_106C90
    ctx->pc = 0x26AAF0u;
    SET_GPR_U32(ctx, 31, 0x26AAF8u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x26AAF0u, 0x26AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AAF8u;
label_26aaf8:
    // 0x26aaf8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x26aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26aafc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26aafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab00: 0xc09a468  jal         func_2691A0
    ctx->pc = 0x26AB00u;
    SET_GPR_U32(ctx, 31, 0x26AB08u);
    ctx->pc = 0x2691A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2691A0u, 0x26AB00u, 0x26AB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB08u;
label_26ab08:
    // 0x26ab08: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x26ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x26ab0c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x26AB0Cu;
    SET_GPR_U32(ctx, 31, 0x26AB14u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x26AB0Cu, 0x26AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB14u;
label_26ab14:
    // 0x26ab14: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x26ab14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x26ab18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ab18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab1c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x26AB1Cu;
    SET_GPR_U32(ctx, 31, 0x26AB24u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x26AB1Cu, 0x26AB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB24u;
label_26ab24:
    // 0x26ab24: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26ab24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab28: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x26AB28u;
    {
        const bool branch_taken_0x26ab28 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ab28) {
            ctx->pc = 0x26AB40u;
            goto label_26ab40;
        }
    }
    ctx->pc = 0x26AB30u;
    // 0x26ab30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26ab30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab34: 0xc0995d0  jal         func_265740
    ctx->pc = 0x26AB34u;
    SET_GPR_U32(ctx, 31, 0x26AB3Cu);
    ctx->pc = 0x265740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265740u, 0x26AB34u, 0x26AB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB3Cu;
label_26ab3c:
    // 0x26ab3c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26ab3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ab40:
    // 0x26ab40: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x26ab40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab44: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x26ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x26ab48: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26ab48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26ab4c: 0x24a5cef8  addiu       $a1, $a1, -0x3108
    ctx->pc = 0x26ab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954744));
    // 0x26ab50: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x26AB50u;
    SET_GPR_U32(ctx, 31, 0x26AB58u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x26AB50u, 0x26AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB58u;
label_26ab58:
    // 0x26ab58: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x26ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26ab5c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x26AB5Cu;
    SET_GPR_U32(ctx, 31, 0x26AB64u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x26AB5Cu, 0x26AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB64u;
label_26ab64:
    // 0x26ab64: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x26ab64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26ab68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ab68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab6c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x26AB6Cu;
    SET_GPR_U32(ctx, 31, 0x26AB74u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x26AB6Cu, 0x26AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB74u;
label_26ab74:
    // 0x26ab74: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26ab74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab78: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x26AB78u;
    {
        const bool branch_taken_0x26ab78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ab78) {
            ctx->pc = 0x26AB90u;
            goto label_26ab90;
        }
    }
    ctx->pc = 0x26AB80u;
    // 0x26ab80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26ab80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ab84: 0xc09d084  jal         func_274210
    ctx->pc = 0x26AB84u;
    SET_GPR_U32(ctx, 31, 0x26AB8Cu);
    ctx->pc = 0x274210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274210u, 0x26AB84u, 0x26AB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AB8Cu;
label_26ab8c:
    // 0x26ab8c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26ab8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ab90:
    // 0x26ab90: 0xafb400cc  sw          $s4, 0xCC($sp)
    ctx->pc = 0x26ab90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 20));
    // 0x26ab94: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26ab94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26ab98: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x26ab98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26ab9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26ab9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aba0: 0xc09d0c0  jal         func_274300
    ctx->pc = 0x26ABA0u;
    SET_GPR_U32(ctx, 31, 0x26ABA8u);
    ctx->pc = 0x274300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274300u, 0x26ABA0u, 0x26ABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ABA8u;
label_26aba8:
    // 0x26aba8: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26aba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26abac: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26abacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26abb0: 0x24a5ce60  addiu       $a1, $a1, -0x31A0
    ctx->pc = 0x26abb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954592));
    // 0x26abb4: 0x2786a0f0  addiu       $a2, $gp, -0x5F10
    ctx->pc = 0x26abb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942960));
    // 0x26abb8: 0xc041b90  jal         func_106E40
    ctx->pc = 0x26ABB8u;
    SET_GPR_U32(ctx, 31, 0x26ABC0u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x26ABB8u, 0x26ABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ABC0u;
label_26abc0:
    // 0x26abc0: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26abc4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26abc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26abc8: 0x24a5ce70  addiu       $a1, $a1, -0x3190
    ctx->pc = 0x26abc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954608));
    // 0x26abcc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26abccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26abd0: 0xc047314  jal         func_11CC50
    ctx->pc = 0x26ABD0u;
    SET_GPR_U32(ctx, 31, 0x26ABD8u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x26ABD0u, 0x26ABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ABD8u;
label_26abd8:
    // 0x26abd8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x26abdc: 0x344286a0  ori         $v0, $v0, 0x86A0
    ctx->pc = 0x26abdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
    // 0x26abe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26abe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26abe4: 0x0  nop
    ctx->pc = 0x26abe4u;
    // NOP
    // 0x26abe8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x26abe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x26abec: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26abecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26abf0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26abf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26abf4: 0x24a5ce80  addiu       $a1, $a1, -0x3180
    ctx->pc = 0x26abf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954624));
    // 0x26abf8: 0xc051414  jal         func_145050
    ctx->pc = 0x26ABF8u;
    SET_GPR_U32(ctx, 31, 0x26AC00u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x26ABF8u, 0x26AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC00u;
label_26ac00:
    // 0x26ac00: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26ac00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26ac04: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26ac04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26ac08: 0x24a5ce98  addiu       $a1, $a1, -0x3168
    ctx->pc = 0x26ac08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954648));
    // 0x26ac0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26ac0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ac10: 0xc041b24  jal         func_106C90
    ctx->pc = 0x26AC10u;
    SET_GPR_U32(ctx, 31, 0x26AC18u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x26AC10u, 0x26AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC18u;
label_26ac18:
    // 0x26ac18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac1c: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x26AC1Cu;
    SET_GPR_U32(ctx, 31, 0x26AC24u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x26AC1Cu, 0x26AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC24u;
label_26ac24:
    // 0x26ac24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ac24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac28: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x26ac28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x26ac2c: 0xc099c4c  jal         func_267130
    ctx->pc = 0x26AC2Cu;
    SET_GPR_U32(ctx, 31, 0x26AC34u);
    ctx->pc = 0x267130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267130u, 0x26AC2Cu, 0x26AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC34u;
label_26ac34:
    // 0x26ac34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ac34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac38: 0xc048094  jal         func_120250
    ctx->pc = 0x26AC38u;
    SET_GPR_U32(ctx, 31, 0x26AC40u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26AC38u, 0x26AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC40u;
label_26ac40:
    // 0x26ac40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ac40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac44: 0x24050402  addiu       $a1, $zero, 0x402
    ctx->pc = 0x26ac44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    // 0x26ac48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26ac48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac4c: 0xc040924  jal         func_102490
    ctx->pc = 0x26AC4Cu;
    SET_GPR_U32(ctx, 31, 0x26AC54u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x26AC4Cu, 0x26AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC54u;
label_26ac54:
    // 0x26ac54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ac54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac58: 0xc048094  jal         func_120250
    ctx->pc = 0x26AC58u;
    SET_GPR_U32(ctx, 31, 0x26AC60u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26AC58u, 0x26AC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC60u;
label_26ac60:
    // 0x26ac60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ac60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac64: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26ac64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26ac68: 0x24a5cea8  addiu       $a1, $a1, -0x3158
    ctx->pc = 0x26ac68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954664));
    // 0x26ac6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26ac6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ac70: 0xc041b24  jal         func_106C90
    ctx->pc = 0x26AC70u;
    SET_GPR_U32(ctx, 31, 0x26AC78u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x26AC70u, 0x26AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC78u;
label_26ac78:
    // 0x26ac78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ac78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac7c: 0xc048094  jal         func_120250
    ctx->pc = 0x26AC7Cu;
    SET_GPR_U32(ctx, 31, 0x26AC84u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26AC7Cu, 0x26AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC84u;
label_26ac84:
    // 0x26ac84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ac84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac88: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26ac88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26ac8c: 0x24a5ceb8  addiu       $a1, $a1, -0x3148
    ctx->pc = 0x26ac8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954680));
    // 0x26ac90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26ac90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ac94: 0xc041b24  jal         func_106C90
    ctx->pc = 0x26AC94u;
    SET_GPR_U32(ctx, 31, 0x26AC9Cu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x26AC94u, 0x26AC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AC9Cu;
label_26ac9c:
    // 0x26ac9c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x26ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26aca0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26aca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aca4: 0xc09a468  jal         func_2691A0
    ctx->pc = 0x26ACA4u;
    SET_GPR_U32(ctx, 31, 0x26ACACu);
    ctx->pc = 0x2691A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2691A0u, 0x26ACA4u, 0x26ACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ACACu;
label_26acac:
    // 0x26acac: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x26acacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x26acb0: 0x2463ce00  addiu       $v1, $v1, -0x3200
    ctx->pc = 0x26acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954496));
    // 0x26acb4: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x26acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x26acb8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x26acb8u;
    { uint32_t bits = FAST_READ32(0x4ECE00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26acbc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x26acbcu;
    { uint32_t bits = FAST_READ32(0x4ECE04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26acc0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x26acc0u;
    { uint32_t bits = FAST_READ32(0x4ECE08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26acc4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x26acc4u;
    { uint32_t bits = FAST_READ32(0x4ECE0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26acc8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x26acc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x26accc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x26acccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x26acd0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x26acd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x26acd4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x26acd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x26acd8: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x26acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x26acdc: 0x2463ce50  addiu       $v1, $v1, -0x31B0
    ctx->pc = 0x26acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954576));
    // 0x26ace0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x26ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x26ace4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x26ace4u;
    { uint32_t bits = FAST_READ32(0x4ECE50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26ace8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x26ace8u;
    { uint32_t bits = FAST_READ32(0x4ECE54u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26acec: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x26acecu;
    { uint32_t bits = FAST_READ32(0x4ECE58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26acf0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x26acf0u;
    { uint32_t bits = FAST_READ32(0x4ECE5Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26acf4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x26acf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x26acf8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x26acf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x26acfc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x26acfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x26ad00: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x26ad00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x26ad04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26ad04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad08: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x26AD08u;
    {
        const bool branch_taken_0x26ad08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ad08) {
            ctx->pc = 0x26AEC4u;
            goto label_26aec4;
        }
    }
    ctx->pc = 0x26AD10u;
label_26ad10:
    // 0x26ad10: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x26ad10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x26ad14: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x26AD14u;
    SET_GPR_U32(ctx, 31, 0x26AD1Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x26AD14u, 0x26AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD1Cu;
label_26ad1c:
    // 0x26ad1c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x26ad1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x26ad20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ad20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad24: 0xc0400e0  jal         func_100380
    ctx->pc = 0x26AD24u;
    SET_GPR_U32(ctx, 31, 0x26AD2Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x26AD24u, 0x26AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD2Cu;
label_26ad2c:
    // 0x26ad2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26ad2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad30: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x26AD30u;
    {
        const bool branch_taken_0x26ad30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ad30) {
            ctx->pc = 0x26AD48u;
            goto label_26ad48;
        }
    }
    ctx->pc = 0x26AD38u;
    // 0x26ad38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26ad38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad3c: 0xc0995d0  jal         func_265740
    ctx->pc = 0x26AD3Cu;
    SET_GPR_U32(ctx, 31, 0x26AD44u);
    ctx->pc = 0x265740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265740u, 0x26AD3Cu, 0x26AD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD44u;
label_26ad44:
    // 0x26ad44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26ad44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ad48:
    // 0x26ad48: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x26ad48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad4c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x26ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x26ad50: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x26ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x26ad54: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x26ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x26ad58: 0x8c4500a0  lw          $a1, 0xA0($v0)
    ctx->pc = 0x26ad58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x26ad5c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x26AD5Cu;
    SET_GPR_U32(ctx, 31, 0x26AD64u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x26AD5Cu, 0x26AD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD64u;
label_26ad64:
    // 0x26ad64: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x26ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26ad68: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x26AD68u;
    SET_GPR_U32(ctx, 31, 0x26AD70u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x26AD68u, 0x26AD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD70u;
label_26ad70:
    // 0x26ad70: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x26ad70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26ad74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26ad74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad78: 0xc0400e0  jal         func_100380
    ctx->pc = 0x26AD78u;
    SET_GPR_U32(ctx, 31, 0x26AD80u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x26AD78u, 0x26AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD80u;
label_26ad80:
    // 0x26ad80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26ad80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad84: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x26AD84u;
    {
        const bool branch_taken_0x26ad84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ad84) {
            ctx->pc = 0x26AD9Cu;
            goto label_26ad9c;
        }
    }
    ctx->pc = 0x26AD8Cu;
    // 0x26ad8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26ad8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad90: 0xc09d084  jal         func_274210
    ctx->pc = 0x26AD90u;
    SET_GPR_U32(ctx, 31, 0x26AD98u);
    ctx->pc = 0x274210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274210u, 0x26AD90u, 0x26AD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AD98u;
label_26ad98:
    // 0x26ad98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26ad98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ad9c:
    // 0x26ad9c: 0xafb200cc  sw          $s2, 0xCC($sp)
    ctx->pc = 0x26ad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 18));
    // 0x26ada0: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26ada0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26ada4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x26ada4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26ada8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26ada8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26adac: 0xc09d0c0  jal         func_274300
    ctx->pc = 0x26ADACu;
    SET_GPR_U32(ctx, 31, 0x26ADB4u);
    ctx->pc = 0x274300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274300u, 0x26ADACu, 0x26ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ADB4u;
label_26adb4:
    // 0x26adb4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x26adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x26adb8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x26adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x26adbc: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26adbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26adc0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26adc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26adc4: 0x24a5ce60  addiu       $a1, $a1, -0x31A0
    ctx->pc = 0x26adc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954592));
    // 0x26adc8: 0x8c4600b0  lw          $a2, 0xB0($v0)
    ctx->pc = 0x26adc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x26adcc: 0xc041b90  jal         func_106E40
    ctx->pc = 0x26ADCCu;
    SET_GPR_U32(ctx, 31, 0x26ADD4u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x26ADCCu, 0x26ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ADD4u;
label_26add4:
    // 0x26add4: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26add4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26add8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26add8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26addc: 0x24a5ce70  addiu       $a1, $a1, -0x3190
    ctx->pc = 0x26addcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954608));
    // 0x26ade0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26ade0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ade4: 0xc047314  jal         func_11CC50
    ctx->pc = 0x26ADE4u;
    SET_GPR_U32(ctx, 31, 0x26ADECu);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x26ADE4u, 0x26ADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26ADECu;
label_26adec:
    // 0x26adec: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26adecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x26adf0: 0x344286a0  ori         $v0, $v0, 0x86A0
    ctx->pc = 0x26adf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
    // 0x26adf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26adf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26adf8: 0x0  nop
    ctx->pc = 0x26adf8u;
    // NOP
    // 0x26adfc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x26adfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x26ae00: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26ae04: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26ae04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26ae08: 0x24a5ce80  addiu       $a1, $a1, -0x3180
    ctx->pc = 0x26ae08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954624));
    // 0x26ae0c: 0xc051414  jal         func_145050
    ctx->pc = 0x26AE0Cu;
    SET_GPR_U32(ctx, 31, 0x26AE14u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x26AE0Cu, 0x26AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE14u;
label_26ae14:
    // 0x26ae14: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x26ae14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x26ae18: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26ae18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26ae1c: 0x24a5ce98  addiu       $a1, $a1, -0x3168
    ctx->pc = 0x26ae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954648));
    // 0x26ae20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26ae20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ae24: 0xc041b24  jal         func_106C90
    ctx->pc = 0x26AE24u;
    SET_GPR_U32(ctx, 31, 0x26AE2Cu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x26AE24u, 0x26AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE2Cu;
label_26ae2c:
    // 0x26ae2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ae2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae30: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x26AE30u;
    SET_GPR_U32(ctx, 31, 0x26AE38u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x26AE30u, 0x26AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE38u;
label_26ae38:
    // 0x26ae38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ae38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae3c: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x26ae3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x26ae40: 0xc099c4c  jal         func_267130
    ctx->pc = 0x26AE40u;
    SET_GPR_U32(ctx, 31, 0x26AE48u);
    ctx->pc = 0x267130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267130u, 0x26AE40u, 0x26AE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE48u;
label_26ae48:
    // 0x26ae48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ae48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae4c: 0xc048094  jal         func_120250
    ctx->pc = 0x26AE4Cu;
    SET_GPR_U32(ctx, 31, 0x26AE54u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26AE4Cu, 0x26AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE54u;
label_26ae54:
    // 0x26ae54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ae54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae58: 0x24050402  addiu       $a1, $zero, 0x402
    ctx->pc = 0x26ae58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
    // 0x26ae5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26ae5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae60: 0xc040924  jal         func_102490
    ctx->pc = 0x26AE60u;
    SET_GPR_U32(ctx, 31, 0x26AE68u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x26AE60u, 0x26AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE68u;
label_26ae68:
    // 0x26ae68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ae68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae6c: 0xc048094  jal         func_120250
    ctx->pc = 0x26AE6Cu;
    SET_GPR_U32(ctx, 31, 0x26AE74u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26AE6Cu, 0x26AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE74u;
label_26ae74:
    // 0x26ae74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ae74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae78: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26ae78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26ae7c: 0x24a5cea8  addiu       $a1, $a1, -0x3158
    ctx->pc = 0x26ae7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954664));
    // 0x26ae80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26ae80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ae84: 0xc041b24  jal         func_106C90
    ctx->pc = 0x26AE84u;
    SET_GPR_U32(ctx, 31, 0x26AE8Cu);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x26AE84u, 0x26AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE8Cu;
label_26ae8c:
    // 0x26ae8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ae8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae90: 0xc048094  jal         func_120250
    ctx->pc = 0x26AE90u;
    SET_GPR_U32(ctx, 31, 0x26AE98u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x26AE90u, 0x26AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AE98u;
label_26ae98:
    // 0x26ae98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ae98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ae9c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26ae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26aea0: 0x24a5ceb8  addiu       $a1, $a1, -0x3148
    ctx->pc = 0x26aea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954680));
    // 0x26aea4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26aea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aea8: 0xc041b24  jal         func_106C90
    ctx->pc = 0x26AEA8u;
    SET_GPR_U32(ctx, 31, 0x26AEB0u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x26AEA8u, 0x26AEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEB0u;
label_26aeb0:
    // 0x26aeb0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x26aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x26aeb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26aeb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aeb8: 0xc09a468  jal         func_2691A0
    ctx->pc = 0x26AEB8u;
    SET_GPR_U32(ctx, 31, 0x26AEC0u);
    ctx->pc = 0x2691A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2691A0u, 0x26AEB8u, 0x26AEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26AEC0u;
label_26aec0:
    // 0x26aec0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26aec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26aec4:
    // 0x26aec4: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x26aec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x26aec8: 0x1440ff91  bnez        $v0, . + 4 + (-0x6F << 2)
    ctx->pc = 0x26AEC8u;
    {
        const bool branch_taken_0x26aec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26aec8) {
            ctx->pc = 0x26AD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ad10;
        }
    }
    ctx->pc = 0x26AED0u;
    // 0x26aed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26aed4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26aed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26aed8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x26aed8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26aedc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x26aedcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26aee0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x26aee0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26aee4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26aee4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26aee8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26aee8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26aeec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26aeecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26aef0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26aef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26aef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26aef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26aef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26aef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26aefc: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x26aefcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x26af00: 0x3e00008  jr          $ra
    ctx->pc = 0x26AF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26AF08u;
    // 0x26af08: 0x0  nop
    ctx->pc = 0x26af08u;
    // NOP
    // 0x26af0c: 0x0  nop
    ctx->pc = 0x26af0cu;
    // NOP
    ctx->pc = 0x26af10u;
}
