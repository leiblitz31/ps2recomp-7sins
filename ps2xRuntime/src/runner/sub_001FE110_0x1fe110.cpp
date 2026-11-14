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

// Function: sub_001FE110
// Address: 0x1fe110 - 0x1fe680
void sub_001FE110_0x1fe110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE110_0x1fe110");
#endif

    switch (ctx->pc) {
        case 0x1fe14cu: goto label_1fe14c;
        case 0x1fe164u: goto label_1fe164;
        case 0x1fe1d8u: goto label_1fe1d8;
        case 0x1fe1e4u: goto label_1fe1e4;
        case 0x1fe26cu: goto label_1fe26c;
        case 0x1fe2a0u: goto label_1fe2a0;
        case 0x1fe2f8u: goto label_1fe2f8;
        case 0x1fe340u: goto label_1fe340;
        case 0x1fe3a0u: goto label_1fe3a0;
        case 0x1fe3e8u: goto label_1fe3e8;
        case 0x1fe430u: goto label_1fe430;
        case 0x1fe480u: goto label_1fe480;
        case 0x1fe4a4u: goto label_1fe4a4;
        case 0x1fe53cu: goto label_1fe53c;
        case 0x1fe5c4u: goto label_1fe5c4;
        case 0x1fe60cu: goto label_1fe60c;
        case 0x1fe64cu: goto label_1fe64c;
        default: break;
    }

    ctx->pc = 0x1fe110u;

    // 0x1fe110: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1fe110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1fe114: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fe114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1fe118: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fe118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fe11c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fe11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fe120: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fe120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fe124: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fe124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fe128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fe12c: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1fe12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1fe130: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x1fe130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x1fe134: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x1fe134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x1fe138: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1fe138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe13c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1fe13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fe140: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x1fe140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fe144: 0xc07eeec  jal         func_1FBBB0
    ctx->pc = 0x1FE144u;
    SET_GPR_U32(ctx, 31, 0x1FE14Cu);
    ctx->pc = 0x1FBBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBBB0u, 0x1FE144u, 0x1FE14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE14Cu;
label_1fe14c:
    // 0x1fe14c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1fe14cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe150: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1fe150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe154: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1fe154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fe158: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x1fe158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fe15c: 0xc07eed8  jal         func_1FBB60
    ctx->pc = 0x1FE15Cu;
    SET_GPR_U32(ctx, 31, 0x1FE164u);
    ctx->pc = 0x1FBB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBB60u, 0x1FE15Cu, 0x1FE164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE164u;
label_1fe164:
    // 0x1fe164: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fe164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe168: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1fe168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe16c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1fe16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fe170: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fe170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe174: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1fe174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1fe178: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fe178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe17c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fe17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fe180: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1fe180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fe184: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fe184u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe188: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fe188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fe18c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fe18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fe190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe194: 0x8c540004  lw          $s4, 0x4($v0)
    ctx->pc = 0x1fe194u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fe198: 0xa3a0008f  sb          $zero, 0x8F($sp)
    ctx->pc = 0x1fe198u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 143), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fe19c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fe19cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe1a0: 0x0  nop
    ctx->pc = 0x1fe1a0u;
    // NOP
    // 0x1fe1a4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1fe1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1fe1a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fe1a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe1ac: 0x0  nop
    ctx->pc = 0x1fe1acu;
    // NOP
    // 0x1fe1b0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1fe1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1fe1b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fe1b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe1b8: 0x0  nop
    ctx->pc = 0x1fe1b8u;
    // NOP
    // 0x1fe1bc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1fe1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1fe1c0: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1fe1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fe1c4: 0xdf8299a8  ld          $v0, -0x6658($gp)
    ctx->pc = 0x1fe1c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294941096)));
    // 0x1fe1c8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1fe1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1fe1cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fe1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fe1d0: 0xc05db34  jal         func_176CD0
    ctx->pc = 0x1FE1D0u;
    SET_GPR_U32(ctx, 31, 0x1FE1D8u);
    ctx->pc = 0x176CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176CD0u, 0x1FE1D0u, 0x1FE1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE1D8u;
label_1fe1d8:
    // 0x1fe1d8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1fe1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe1dc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FE1DCu;
    SET_GPR_U32(ctx, 31, 0x1FE1E4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FE1DCu, 0x1FE1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE1E4u;
label_1fe1e4:
    // 0x1fe1e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe1e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1e8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1fe1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fe1ec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1fe1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe1f0: 0xac430104  sw          $v1, 0x104($v0)
    ctx->pc = 0x1fe1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 3));
    // 0x1fe1f4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fe1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fe1f8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1fe1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe1fc: 0xac430108  sw          $v1, 0x108($v0)
    ctx->pc = 0x1fe1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 3));
    // 0x1fe200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe204: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1fe204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe208: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fe208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe20c: 0x8c630104  lw          $v1, 0x104($v1)
    ctx->pc = 0x1fe20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1fe210: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1fe210u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fe214: 0x8ca300a4  lw          $v1, 0xA4($a1)
    ctx->pc = 0x1fe214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
    // 0x1fe218: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1fe218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe21c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1fe21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe220: 0x8c640108  lw          $a0, 0x108($v1)
    ctx->pc = 0x1fe220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x1fe224: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1fe224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1fe228: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1fe228u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe22c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1fe22cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fe230: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fe230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fe234: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe238: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x1fe238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x1fe23c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe240: 0xa3a2008f  sb          $v0, 0x8F($sp)
    ctx->pc = 0x1fe240u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 143), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fe244: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fe244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fe248: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fe248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fe24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe250: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fe250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe254: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1fe254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fe258: 0x27a7008f  addiu       $a3, $sp, 0x8F
    ctx->pc = 0x1fe258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 143));
    // 0x1fe25c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fe25cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe260: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe260u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe264: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FE264u;
    SET_GPR_U32(ctx, 31, 0x1FE26Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FE264u, 0x1FE26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE26Cu;
label_1fe26c:
    // 0x1fe26c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fe26cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe270: 0x0  nop
    ctx->pc = 0x1fe270u;
    // NOP
    // 0x1fe274: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1fe274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1fe278: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fe278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fe27c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fe27cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fe280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe284: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fe284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe288: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1fe288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe28c: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x1fe28cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1fe290: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fe290u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe294: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe294u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe298: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FE298u;
    SET_GPR_U32(ctx, 31, 0x1FE2A0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FE298u, 0x1FE2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE2A0u;
label_1fe2a0:
    // 0x1fe2a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fe2a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe2a4: 0x0  nop
    ctx->pc = 0x1fe2a4u;
    // NOP
    // 0x1fe2a8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1fe2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1fe2ac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1fe2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1fe2b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fe2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fe2b4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fe2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fe2b8: 0xc440bf7c  lwc1        $f0, -0x4084($v0)
    ctx->pc = 0x1fe2b8u;
    { uint32_t bits = FAST_READ32(0x60BF7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe2bc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fe2bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fe2c0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1fe2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1fe2c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fe2c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe2c8: 0x0  nop
    ctx->pc = 0x1fe2c8u;
    // NOP
    // 0x1fe2cc: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1fe2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1fe2d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe2d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe2d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1fe2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe2dc: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x1fe2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1fe2e0: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x1fe2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fe2e4: 0xc7ad0080  lwc1        $f13, 0x80($sp)
    ctx->pc = 0x1fe2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fe2e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fe2e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe2ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe2ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe2f0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FE2F0u;
    SET_GPR_U32(ctx, 31, 0x1FE2F8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FE2F0u, 0x1FE2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE2F8u;
label_1fe2f8:
    // 0x1fe2f8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1fe2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe2fc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1fe2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe300: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fe300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fe304: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1fe304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1fe308: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fe308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fe30c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fe30cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe310: 0x0  nop
    ctx->pc = 0x1fe310u;
    // NOP
    // 0x1fe314: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1fe314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1fe318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe31c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fe31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe320: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1fe320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe324: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x1fe324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1fe328: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x1fe328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fe32c: 0xc7ad0080  lwc1        $f13, 0x80($sp)
    ctx->pc = 0x1fe32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fe330: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fe330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe334: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe338: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FE338u;
    SET_GPR_U32(ctx, 31, 0x1FE340u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FE338u, 0x1FE340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE340u;
label_1fe340:
    // 0x1fe340: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1fe340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe344: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1fe344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe348: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fe348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fe34c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1fe34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1fe350: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1fe350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe354: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1fe354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1fe358: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x1fe358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
    // 0x1fe35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fe35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe360: 0x0  nop
    ctx->pc = 0x1fe360u;
    // NOP
    // 0x1fe364: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1fe364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1fe368: 0xc78082d0  lwc1        $f0, -0x7D30($gp)
    ctx->pc = 0x1fe368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe36c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1fe36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1fe370: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1fe370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1fe374: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1fe374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe378: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1fe378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fe37c: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x1fe37cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fe380: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fe380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe384: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x1fe384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fe388: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x1fe388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fe38c: 0xc7ad0080  lwc1        $f13, 0x80($sp)
    ctx->pc = 0x1fe38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fe390: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe390u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe394: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fe394u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe398: 0xc07fad0  jal         func_1FEB40
    ctx->pc = 0x1FE398u;
    SET_GPR_U32(ctx, 31, 0x1FE3A0u);
    ctx->pc = 0x1FEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB40u, 0x1FE398u, 0x1FE3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE3A0u;
label_1fe3a0:
    // 0x1fe3a0: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1fe3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe3a4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1fe3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe3a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fe3a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fe3ac: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1fe3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1fe3b0: 0xc7808278  lwc1        $f0, -0x7D88($gp)
    ctx->pc = 0x1fe3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe3b4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1fe3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1fe3b8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1fe3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1fe3bc: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1fe3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe3c0: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1fe3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fe3c4: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x1fe3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fe3c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fe3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe3cc: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x1fe3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fe3d0: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x1fe3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fe3d4: 0xc7ad0080  lwc1        $f13, 0x80($sp)
    ctx->pc = 0x1fe3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fe3d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe3d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fe3dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe3e0: 0xc07fad0  jal         func_1FEB40
    ctx->pc = 0x1FE3E0u;
    SET_GPR_U32(ctx, 31, 0x1FE3E8u);
    ctx->pc = 0x1FEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB40u, 0x1FE3E0u, 0x1FE3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE3E8u;
label_1fe3e8:
    // 0x1fe3e8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1fe3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe3ec: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1fe3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe3f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fe3f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fe3f4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1fe3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1fe3f8: 0xc78082d0  lwc1        $f0, -0x7D30($gp)
    ctx->pc = 0x1fe3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe3fc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1fe3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1fe400: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1fe400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1fe404: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1fe404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe408: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1fe408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fe40c: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x1fe40cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fe410: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fe410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe414: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x1fe414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fe418: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x1fe418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fe41c: 0xc7ad0080  lwc1        $f13, 0x80($sp)
    ctx->pc = 0x1fe41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fe420: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe420u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe424: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fe424u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe428: 0xc07fad0  jal         func_1FEB40
    ctx->pc = 0x1FE428u;
    SET_GPR_U32(ctx, 31, 0x1FE430u);
    ctx->pc = 0x1FEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB40u, 0x1FE428u, 0x1FE430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE430u;
label_1fe430:
    // 0x1fe430: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1fe430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe434: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1fe434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe438: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fe438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fe43c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1fe43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1fe440: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fe440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fe444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fe444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe448: 0x0  nop
    ctx->pc = 0x1fe448u;
    // NOP
    // 0x1fe44c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1fe44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1fe450: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1fe450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1fe454: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1fe454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fe458: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x1fe458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fe45c: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x1fe45cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fe460: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fe460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe464: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x1fe464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1fe468: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x1fe468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fe46c: 0xc7ad0080  lwc1        $f13, 0x80($sp)
    ctx->pc = 0x1fe46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fe470: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe470u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe474: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fe474u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe478: 0xc07fad0  jal         func_1FEB40
    ctx->pc = 0x1FE478u;
    SET_GPR_U32(ctx, 31, 0x1FE480u);
    ctx->pc = 0x1FEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEB40u, 0x1FE478u, 0x1FE480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE480u;
label_1fe480:
    // 0x1fe480: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1fe480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe484: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1fe484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe488: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fe488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fe48c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1fe48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1fe490: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1fe490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe494: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1fe494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1fe498: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fe498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe49c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1FE49Cu;
    {
        const bool branch_taken_0x1fe49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe49c) {
            ctx->pc = 0x1FE560u;
            goto label_1fe560;
        }
    }
    ctx->pc = 0x1FE4A4u;
label_1fe4a4:
    // 0x1fe4a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fe4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe4a8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1fe4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1fe4ac: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FE4ACu;
    {
        const bool branch_taken_0x1fe4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe4ac) {
            ctx->pc = 0x1FE4DCu;
            goto label_1fe4dc;
        }
    }
    ctx->pc = 0x1FE4B4u;
    // 0x1fe4b4: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1fe4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe4b8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1fe4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1fe4bc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1fe4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1fe4c0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1fe4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1fe4c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fe4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fe4c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fe4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe4cc: 0x0  nop
    ctx->pc = 0x1fe4ccu;
    // NOP
    // 0x1fe4d0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1fe4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1fe4d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FE4D4u;
    {
        const bool branch_taken_0x1fe4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe4d4) {
            ctx->pc = 0x1FE504u;
            goto label_1fe504;
        }
    }
    ctx->pc = 0x1FE4DCu;
label_1fe4dc:
    // 0x1fe4dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fe4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fe4e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fe4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe4e4: 0x0  nop
    ctx->pc = 0x1fe4e4u;
    // NOP
    // 0x1fe4e8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1fe4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1fe4ec: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1fe4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1fe4f0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1fe4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1fe4f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fe4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fe4f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fe4f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe4fc: 0x0  nop
    ctx->pc = 0x1fe4fcu;
    // NOP
    // 0x1fe500: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1fe500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1fe504:
    // 0x1fe504: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1fe504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1fe508: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fe508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fe50c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fe50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fe510: 0xc440bf78  lwc1        $f0, -0x4088($v0)
    ctx->pc = 0x1fe510u;
    { uint32_t bits = FAST_READ32(0x60BF78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe514: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x1fe514u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fe518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe51c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fe51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe520: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1fe520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fe524: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1fe524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1fe528: 0xc7ac0078  lwc1        $f12, 0x78($sp)
    ctx->pc = 0x1fe528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fe52c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fe52cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe530: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe534: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FE534u;
    SET_GPR_U32(ctx, 31, 0x1FE53Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FE534u, 0x1FE53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE53Cu;
label_1fe53c:
    // 0x1fe53c: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1fe53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fe540: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1fe540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1fe544: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fe544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fe548: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fe548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fe54c: 0xc440bf78  lwc1        $f0, -0x4088($v0)
    ctx->pc = 0x1fe54cu;
    { uint32_t bits = FAST_READ32(0x60BF78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe550: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fe550u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fe554: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fe554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1fe558: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1fe558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1fe55c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1fe55cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1fe560:
    // 0x1fe560: 0x2e420006  sltiu       $v0, $s2, 0x6
    ctx->pc = 0x1fe560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1fe564: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1FE564u;
    {
        const bool branch_taken_0x1fe564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe564) {
            ctx->pc = 0x1FE4A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe4a4;
        }
    }
    ctx->pc = 0x1FE56Cu;
    // 0x1fe56c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1fe56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe570: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1fe570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1fe574: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1fe574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1fe578: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fe578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fe57c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fe57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fe580: 0xc440bf7c  lwc1        $f0, -0x4084($v0)
    ctx->pc = 0x1fe580u;
    { uint32_t bits = FAST_READ32(0x60BF7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe584: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1fe584u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fe588: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1fe588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1fe58c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1fe58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1fe590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fe590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe594: 0x0  nop
    ctx->pc = 0x1fe594u;
    // NOP
    // 0x1fe598: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1fe598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1fe59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fe5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1fe5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe5a8: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x1fe5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1fe5ac: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x1fe5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fe5b0: 0xc7ad0080  lwc1        $f13, 0x80($sp)
    ctx->pc = 0x1fe5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fe5b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fe5b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe5b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5bc: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FE5BCu;
    SET_GPR_U32(ctx, 31, 0x1FE5C4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FE5BCu, 0x1FE5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE5C4u;
label_1fe5c4:
    // 0x1fe5c4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1fe5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe5c8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1fe5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe5cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fe5ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fe5d0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1fe5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1fe5d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fe5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fe5d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fe5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fe5dc: 0x0  nop
    ctx->pc = 0x1fe5dcu;
    // NOP
    // 0x1fe5e0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1fe5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1fe5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe5ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1fe5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe5f0: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x1fe5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1fe5f4: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x1fe5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fe5f8: 0xc7ad0080  lwc1        $f13, 0x80($sp)
    ctx->pc = 0x1fe5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fe5fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fe5fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe600: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe600u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe604: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FE604u;
    SET_GPR_U32(ctx, 31, 0x1FE60Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FE604u, 0x1FE60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE60Cu;
label_1fe60c:
    // 0x1fe60c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1fe60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fe610: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1fe610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe614: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fe614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fe618: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1fe618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1fe61c: 0xa3a0008f  sb          $zero, 0x8F($sp)
    ctx->pc = 0x1fe61cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 143), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fe620: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fe620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fe624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe628: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fe628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe62c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1fe62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fe630: 0x27a7008f  addiu       $a3, $sp, 0x8F
    ctx->pc = 0x1fe630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 143));
    // 0x1fe634: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x1fe634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fe638: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1fe638u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
    // 0x1fe63c: 0x2508ed90  addiu       $t0, $t0, -0x1270
    ctx->pc = 0x1fe63cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962576));
    // 0x1fe640: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe640u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe644: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1FE644u;
    SET_GPR_U32(ctx, 31, 0x1FE64Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1FE644u, 0x1FE64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE64Cu;
label_1fe64c:
    // 0x1fe64c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1fe64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe650: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fe650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fe654: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fe654u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe658: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fe658u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe65c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fe65cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe668: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1fe668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1fe66c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE674u;
    // 0x1fe674: 0x0  nop
    ctx->pc = 0x1fe674u;
    // NOP
    // 0x1fe678: 0x0  nop
    ctx->pc = 0x1fe678u;
    // NOP
    // 0x1fe67c: 0x0  nop
    ctx->pc = 0x1fe67cu;
    // NOP
    ctx->pc = 0x1fe680u;
}
