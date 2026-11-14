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

// Function: sub_001BAA00
// Address: 0x1baa00 - 0x1bb210
void sub_001BAA00_0x1baa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAA00_0x1baa00");
#endif

    switch (ctx->pc) {
        case 0x1baa1cu: goto label_1baa1c;
        case 0x1baaa0u: goto label_1baaa0;
        case 0x1baaacu: goto label_1baaac;
        case 0x1baab8u: goto label_1baab8;
        case 0x1bab38u: goto label_1bab38;
        case 0x1bab6cu: goto label_1bab6c;
        case 0x1bab7cu: goto label_1bab7c;
        case 0x1bab90u: goto label_1bab90;
        case 0x1bac4cu: goto label_1bac4c;
        case 0x1bac60u: goto label_1bac60;
        case 0x1bad44u: goto label_1bad44;
        case 0x1bae24u: goto label_1bae24;
        case 0x1bae64u: goto label_1bae64;
        case 0x1bae78u: goto label_1bae78;
        case 0x1bae84u: goto label_1bae84;
        case 0x1baedcu: goto label_1baedc;
        case 0x1baf1cu: goto label_1baf1c;
        case 0x1baf60u: goto label_1baf60;
        case 0x1baf6cu: goto label_1baf6c;
        case 0x1bb008u: goto label_1bb008;
        case 0x1bb014u: goto label_1bb014;
        case 0x1bb02cu: goto label_1bb02c;
        case 0x1bb040u: goto label_1bb040;
        case 0x1bb06cu: goto label_1bb06c;
        case 0x1bb094u: goto label_1bb094;
        case 0x1bb0c0u: goto label_1bb0c0;
        case 0x1bb120u: goto label_1bb120;
        case 0x1bb14cu: goto label_1bb14c;
        case 0x1bb188u: goto label_1bb188;
        case 0x1bb194u: goto label_1bb194;
        case 0x1bb1a0u: goto label_1bb1a0;
        case 0x1bb1b4u: goto label_1bb1b4;
        default: break;
    }

    ctx->pc = 0x1baa00u;

    // 0x1baa00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1baa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1baa04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1baa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1baa08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1baa08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1baa0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1baa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1baa10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1baa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1baa14: 0xc06e8c0  jal         func_1BA300
    ctx->pc = 0x1BAA14u;
    SET_GPR_U32(ctx, 31, 0x1BAA1Cu);
    ctx->pc = 0x1BA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA300u, 0x1BAA14u, 0x1BAA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA1Cu;
label_1baa1c:
    // 0x1baa1c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1baa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1baa20: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1baa20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1baa24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1baa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1baa28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1baa28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1baa2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1baa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1baa30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1baa30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baa34: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1baa34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1baa38: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAA40u;
    // 0x1baa40: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1baa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1baa44: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1baa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1baa48: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1baa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1baa4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1baa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1baa50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1baa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1baa54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1baa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1baa58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1baa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1baa5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1baa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1baa60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1baa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1baa64: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x1baa64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x1baa68: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1baa68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baa6c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1baa6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baa70: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1baa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1baa74: 0xc440be60  lwc1        $f0, -0x41A0($v0)
    ctx->pc = 0x1baa74u;
    { uint32_t bits = FAST_READ32(0x60BE60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1baa78: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1baa78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1baa7c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1baa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1baa80: 0xc440be64  lwc1        $f0, -0x419C($v0)
    ctx->pc = 0x1baa80u;
    { uint32_t bits = FAST_READ32(0x60BE64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1baa84: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1baa84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1baa88: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1baa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1baa8c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1baa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1baa90: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x1baa90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1baa94: 0x244608f0  addiu       $a2, $v0, 0x8F0
    ctx->pc = 0x1baa94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2288));
    // 0x1baa98: 0xc070c8c  jal         func_1C3230
    ctx->pc = 0x1BAA98u;
    SET_GPR_U32(ctx, 31, 0x1BAAA0u);
    ctx->pc = 0x1C3230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3230u, 0x1BAA98u, 0x1BAAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAAA0u;
label_1baaa0:
    // 0x1baaa0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1baaa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baaa4: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x1BAAA4u;
    {
        const bool branch_taken_0x1baaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baaa4) {
            ctx->pc = 0x1BAE44u;
            goto label_1bae44;
        }
    }
    ctx->pc = 0x1BAAACu;
label_1baaac:
    // 0x1baaac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1baaacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baab0: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x1BAAB0u;
    {
        const bool branch_taken_0x1baab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baab0) {
            ctx->pc = 0x1BAE2Cu;
            goto label_1bae2c;
        }
    }
    ctx->pc = 0x1BAAB8u;
label_1baab8:
    // 0x1baab8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1baab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1baabc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1baabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1baac0: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x1baac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1baac4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1baac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1baac8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1baac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1baacc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1baaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1baad0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1baad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1baad4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1baad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1baad8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1baad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1baadc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1baadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1baae0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAAE0u;
    {
        const bool branch_taken_0x1baae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1baae0) {
            ctx->pc = 0x1BAAF8u;
            goto label_1baaf8;
        }
    }
    ctx->pc = 0x1BAAE8u;
    // 0x1baae8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1baae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1baaec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1baaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1baaf0: 0x146200cd  bne         $v1, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x1BAAF0u;
    {
        const bool branch_taken_0x1baaf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1baaf0) {
            ctx->pc = 0x1BAE28u;
            goto label_1bae28;
        }
    }
    ctx->pc = 0x1BAAF8u;
label_1baaf8:
    // 0x1baaf8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1baaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1baafc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1baafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1bab00: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x1bab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1bab04: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1bab04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bab08: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1bab08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1bab0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1bab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bab10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bab10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bab14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bab18: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1bab18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bab1c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1bab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bab20: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x1bab20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bab24: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x1bab24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bab28: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1bab28u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1bab2c: 0x246400c4  addiu       $a0, $v1, 0xC4
    ctx->pc = 0x1bab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 196));
    // 0x1bab30: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1BAB30u;
    SET_GPR_U32(ctx, 31, 0x1BAB38u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1BAB30u, 0x1BAB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB38u;
label_1bab38:
    // 0x1bab38: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1bab38u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bab3c: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x1bab3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bab40: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x1bab40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bab44: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1bab44u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1bab48: 0x82020008  lb          $v0, 0x8($s0)
    ctx->pc = 0x1bab48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bab4c: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1bab4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bab50: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1bab50u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1bab54: 0x82020009  lb          $v0, 0x9($s0)
    ctx->pc = 0x1bab54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x1bab58: 0x23e3c  dsll32      $a3, $v0, 24
    ctx->pc = 0x1bab58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bab5c: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x1bab5cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x1bab60: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1bab60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bab64: 0xc070240  jal         func_1C0900
    ctx->pc = 0x1BAB64u;
    SET_GPR_U32(ctx, 31, 0x1BAB6Cu);
    ctx->pc = 0x1C0900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0900u, 0x1BAB64u, 0x1BAB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB6Cu;
label_1bab6c:
    // 0x1bab6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1bab6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bab70: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1bab70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bab74: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1BAB74u;
    SET_GPR_U32(ctx, 31, 0x1BAB7Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1BAB74u, 0x1BAB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB7Cu;
label_1bab7c:
    // 0x1bab7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bab7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bab80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bab80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bab84: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1bab84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bab88: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1BAB88u;
    SET_GPR_U32(ctx, 31, 0x1BAB90u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1BAB88u, 0x1BAB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB90u;
label_1bab90:
    // 0x1bab90: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAB90u;
    {
        const bool branch_taken_0x1bab90 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1bab90) {
            ctx->pc = 0x1BABACu;
            goto label_1babac;
        }
    }
    ctx->pc = 0x1BAB98u;
    // 0x1bab98: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1bab98u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bab9c: 0x0  nop
    ctx->pc = 0x1bab9cu;
    // NOP
    // 0x1baba0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1baba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1baba4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BABA4u;
    {
        const bool branch_taken_0x1baba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baba4) {
            ctx->pc = 0x1BABC8u;
            goto label_1babc8;
        }
    }
    ctx->pc = 0x1BABACu;
label_1babac:
    // 0x1babac: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1babacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x1babb0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1babb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1babb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1babb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1babb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1babb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1babbc: 0x0  nop
    ctx->pc = 0x1babbcu;
    // NOP
    // 0x1babc0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1babc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1babc4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1babc4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1babc8:
    // 0x1babc8: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x1babc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1babcc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1babccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1babd0: 0xc441be68  lwc1        $f1, -0x4198($v0)
    ctx->pc = 0x1babd0u;
    { uint32_t bits = FAST_READ32(0x60BE68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1babd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1babd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1babd8: 0x0  nop
    ctx->pc = 0x1babd8u;
    // NOP
    // 0x1babdc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1babdcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1babe0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1babe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1babe4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1babe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1babe8: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BABE8u;
    {
        const bool branch_taken_0x1babe8 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1babe8) {
            ctx->pc = 0x1BAC04u;
            goto label_1bac04;
        }
    }
    ctx->pc = 0x1BABF0u;
    // 0x1babf0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1babf0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1babf4: 0x0  nop
    ctx->pc = 0x1babf4u;
    // NOP
    // 0x1babf8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1babf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1babfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BABFCu;
    {
        const bool branch_taken_0x1babfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1babfc) {
            ctx->pc = 0x1BAC20u;
            goto label_1bac20;
        }
    }
    ctx->pc = 0x1BAC04u;
label_1bac04:
    // 0x1bac04: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1bac04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1bac08: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1bac08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1bac0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bac0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bac10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bac10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bac14: 0x0  nop
    ctx->pc = 0x1bac14u;
    // NOP
    // 0x1bac18: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1bac18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1bac1c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1bac1cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1bac20:
    // 0x1bac20: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x1bac20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bac24: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bac24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bac28: 0xc441be6c  lwc1        $f1, -0x4194($v0)
    ctx->pc = 0x1bac28u;
    { uint32_t bits = FAST_READ32(0x60BE6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bac2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bac2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bac30: 0x0  nop
    ctx->pc = 0x1bac30u;
    // NOP
    // 0x1bac34: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1bac34u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1bac38: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1bac38u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1bac3c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1bac3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1bac40: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1bac40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bac44: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1BAC44u;
    SET_GPR_U32(ctx, 31, 0x1BAC4Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1BAC44u, 0x1BAC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC4Cu;
label_1bac4c:
    // 0x1bac4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bac4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac50: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1bac50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac54: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x1bac54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1bac58: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1BAC58u;
    SET_GPR_U32(ctx, 31, 0x1BAC60u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1BAC58u, 0x1BAC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC60u;
label_1bac60:
    // 0x1bac60: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAC60u;
    {
        const bool branch_taken_0x1bac60 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1bac60) {
            ctx->pc = 0x1BAC7Cu;
            goto label_1bac7c;
        }
    }
    ctx->pc = 0x1BAC68u;
    // 0x1bac68: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1bac68u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bac6c: 0x0  nop
    ctx->pc = 0x1bac6cu;
    // NOP
    // 0x1bac70: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1bac70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1bac74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAC74u;
    {
        const bool branch_taken_0x1bac74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bac74) {
            ctx->pc = 0x1BAC98u;
            goto label_1bac98;
        }
    }
    ctx->pc = 0x1BAC7Cu;
label_1bac7c:
    // 0x1bac7c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1bac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x1bac80: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1bac80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1bac84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bac84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bac88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bac88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bac8c: 0x0  nop
    ctx->pc = 0x1bac8cu;
    // NOP
    // 0x1bac90: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1bac90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1bac94: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1bac94u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1bac98:
    // 0x1bac98: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1bac98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bac9c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1baca0: 0xc441be68  lwc1        $f1, -0x4198($v0)
    ctx->pc = 0x1baca0u;
    { uint32_t bits = FAST_READ32(0x60BE68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1baca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1baca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baca8: 0x0  nop
    ctx->pc = 0x1baca8u;
    // NOP
    // 0x1bacac: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1bacacu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1bacb0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1bacb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1bacb4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1bacb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1bacb8: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BACB8u;
    {
        const bool branch_taken_0x1bacb8 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1bacb8) {
            ctx->pc = 0x1BACD4u;
            goto label_1bacd4;
        }
    }
    ctx->pc = 0x1BACC0u;
    // 0x1bacc0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1bacc0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bacc4: 0x0  nop
    ctx->pc = 0x1bacc4u;
    // NOP
    // 0x1bacc8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1bacc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1baccc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BACCCu;
    {
        const bool branch_taken_0x1baccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baccc) {
            ctx->pc = 0x1BACF0u;
            goto label_1bacf0;
        }
    }
    ctx->pc = 0x1BACD4u;
label_1bacd4:
    // 0x1bacd4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1bacd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1bacd8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1bacd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1bacdc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bacdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bace0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bace0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bace4: 0x0  nop
    ctx->pc = 0x1bace4u;
    // NOP
    // 0x1bace8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1bace8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1bacec: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1bacecu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1bacf0:
    // 0x1bacf0: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x1bacf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bacf4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bacf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bacf8: 0xc441be6c  lwc1        $f1, -0x4194($v0)
    ctx->pc = 0x1bacf8u;
    { uint32_t bits = FAST_READ32(0x60BE6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bacfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bacfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bad00: 0x0  nop
    ctx->pc = 0x1bad00u;
    // NOP
    // 0x1bad04: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1bad04u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1bad08: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1bad08u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1bad0c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1bad0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1bad10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bad10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bad14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bad14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bad18: 0x0  nop
    ctx->pc = 0x1bad18u;
    // NOP
    // 0x1bad1c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1bad1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1bad20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bad20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bad24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bad28: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1BAD28u;
    {
        const bool branch_taken_0x1bad28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bad28) {
            ctx->pc = 0x1BADB0u;
            goto label_1badb0;
        }
    }
    ctx->pc = 0x1BAD30u;
    // 0x1bad30: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1bad30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bad34: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x1bad34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1bad38: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1bad38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bad3c: 0xc070b00  jal         func_1C2C00
    ctx->pc = 0x1BAD3Cu;
    SET_GPR_U32(ctx, 31, 0x1BAD44u);
    ctx->pc = 0x1C2C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2C00u, 0x1BAD3Cu, 0x1BAD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD44u;
label_1bad44:
    // 0x1bad44: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1bad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bad48: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1bad48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bad4c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1bad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bad50: 0xc44000ac  lwc1        $f0, 0xAC($v0)
    ctx->pc = 0x1bad50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bad54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bad54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bad58: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1bad58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1bad5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bad60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bad60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bad64: 0x0  nop
    ctx->pc = 0x1bad64u;
    // NOP
    // 0x1bad68: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1bad68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1bad6c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1bad6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bad70: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1bad70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1bad74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bad74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bad78: 0x0  nop
    ctx->pc = 0x1bad78u;
    // NOP
    // 0x1bad7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bad7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bad80: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAD80u;
    {
        const bool branch_taken_0x1bad80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bad80) {
            ctx->pc = 0x1BAD9Cu;
            goto label_1bad9c;
        }
    }
    ctx->pc = 0x1BAD88u;
    // 0x1bad88: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1bad88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1bad8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bad8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bad90: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1bad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bad94: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bad94u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1bad98: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1bad98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1bad9c:
    // 0x1bad9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bada0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bada0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bada4: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1bada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bada8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bada8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1badac: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1badacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1badb0:
    // 0x1badb0: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x1badb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x1badb4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BADB4u;
    {
        const bool branch_taken_0x1badb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1badb4) {
            ctx->pc = 0x1BADD0u;
            goto label_1badd0;
        }
    }
    ctx->pc = 0x1BADBCu;
    // 0x1badbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1badbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1badc0: 0x0  nop
    ctx->pc = 0x1badc0u;
    // NOP
    // 0x1badc4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1badc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1badc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BADC8u;
    {
        const bool branch_taken_0x1badc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1badc8) {
            ctx->pc = 0x1BADECu;
            goto label_1badec;
        }
    }
    ctx->pc = 0x1BADD0u;
label_1badd0:
    // 0x1badd0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1badd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1badd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1badd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1badd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1badd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1baddc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1baddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bade0: 0x0  nop
    ctx->pc = 0x1bade0u;
    // NOP
    // 0x1bade4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bade4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bade8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bade8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1badec:
    // 0x1badec: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x1badecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
    // 0x1badf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1badf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1badf4: 0x0  nop
    ctx->pc = 0x1badf4u;
    // NOP
    // 0x1badf8: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1badf8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1badfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1badfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bae00: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1bae00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1bae04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bae04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bae08: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1bae08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bae0c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1bae0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bae10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bae10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae14: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x1bae14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1bae18: 0xc7af00ac  lwc1        $f15, 0xAC($sp)
    ctx->pc = 0x1bae18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1bae1c: 0xc0705c4  jal         func_1C1710
    ctx->pc = 0x1BAE1Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE24u);
    ctx->pc = 0x1C1710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1710u, 0x1BAE1Cu, 0x1BAE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE24u;
label_1bae24:
    // 0x1bae24: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bae24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1bae28:
    // 0x1bae28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bae28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bae2c:
    // 0x1bae2c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bae30: 0x8c42be58  lw          $v0, -0x41A8($v0)
    ctx->pc = 0x1bae30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1bae34: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1bae34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bae38: 0x1440ff1f  bnez        $v0, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x1BAE38u;
    {
        const bool branch_taken_0x1bae38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bae38) {
            ctx->pc = 0x1BAAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1baab8;
        }
    }
    ctx->pc = 0x1BAE40u;
    // 0x1bae40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bae40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1bae44:
    // 0x1bae44: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bae44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bae48: 0x8c42be5c  lw          $v0, -0x41A4($v0)
    ctx->pc = 0x1bae48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE5Cu));
    // 0x1bae4c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1bae4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bae50: 0x1440ff16  bnez        $v0, . + 4 + (-0xEA << 2)
    ctx->pc = 0x1BAE50u;
    {
        const bool branch_taken_0x1bae50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bae50) {
            ctx->pc = 0x1BAAACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1baaac;
        }
    }
    ctx->pc = 0x1BAE58u;
    // 0x1bae58: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1bae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bae5c: 0xc0704c0  jal         func_1C1300
    ctx->pc = 0x1BAE5Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE64u);
    ctx->pc = 0x1C1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1300u, 0x1BAE5Cu, 0x1BAE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE64u;
label_1bae64:
    // 0x1bae64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BAE64u;
    {
        const bool branch_taken_0x1bae64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bae64) {
            ctx->pc = 0x1BAE78u;
            goto label_1bae78;
        }
    }
    ctx->pc = 0x1BAE6Cu;
    // 0x1bae6c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1bae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bae70: 0xc070bc4  jal         func_1C2F10
    ctx->pc = 0x1BAE70u;
    SET_GPR_U32(ctx, 31, 0x1BAE78u);
    ctx->pc = 0x1C2F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F10u, 0x1BAE70u, 0x1BAE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE78u;
label_1bae78:
    // 0x1bae78: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1bae78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bae7c: 0xc064aec  jal         func_192BB0
    ctx->pc = 0x1BAE7Cu;
    SET_GPR_U32(ctx, 31, 0x1BAE84u);
    ctx->pc = 0x192BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192BB0u, 0x1BAE7Cu, 0x1BAE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE84u;
label_1bae84:
    // 0x1bae84: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bae84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bae88: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bae88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bae8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bae8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bae90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bae90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bae94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bae94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bae98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bae98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bae9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bae9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1baea0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1baea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baea4: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1baea4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1baea8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAEB0u;
    // 0x1baeb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1baeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1baeb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1baeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1baeb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1baeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1baebc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1baebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1baec0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1baec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1baec4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1baec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1baec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1baec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1baecc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1baeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1baed0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1baed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1baed4: 0xc064cb0  jal         func_1932C0
    ctx->pc = 0x1BAED4u;
    SET_GPR_U32(ctx, 31, 0x1BAEDCu);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x1BAED4u, 0x1BAEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAEDCu;
label_1baedc:
    // 0x1baedc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1baedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1baee0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAEE0u;
    {
        const bool branch_taken_0x1baee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baee0) {
            ctx->pc = 0x1BAEF8u;
            goto label_1baef8;
        }
    }
    ctx->pc = 0x1BAEE8u;
    // 0x1baee8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1baee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1baeec: 0x904200b0  lbu         $v0, 0xB0($v0)
    ctx->pc = 0x1baeecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1baef0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAEF0u;
    {
        const bool branch_taken_0x1baef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baef0) {
            ctx->pc = 0x1BAF10u;
            goto label_1baf10;
        }
    }
    ctx->pc = 0x1BAEF8u;
label_1baef8:
    // 0x1baef8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1baef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1baefc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1baefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1baf00: 0xa04300b0  sb          $v1, 0xB0($v0)
    ctx->pc = 0x1baf00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 176), (uint8_t)GPR_U32(ctx, 3));
    // 0x1baf04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1baf04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf08: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x1BAF08u;
    {
        const bool branch_taken_0x1baf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baf08) {
            ctx->pc = 0x1BB1CCu;
            goto label_1bb1cc;
        }
    }
    ctx->pc = 0x1BAF10u;
label_1baf10:
    // 0x1baf10: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1baf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1baf14: 0xc0704c0  jal         func_1C1300
    ctx->pc = 0x1BAF14u;
    SET_GPR_U32(ctx, 31, 0x1BAF1Cu);
    ctx->pc = 0x1C1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1300u, 0x1BAF14u, 0x1BAF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF1Cu;
label_1baf1c:
    // 0x1baf1c: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1BAF1Cu;
    {
        const bool branch_taken_0x1baf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baf1c) {
            ctx->pc = 0x1BB078u;
            goto label_1bb078;
        }
    }
    ctx->pc = 0x1BAF24u;
    // 0x1baf24: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1baf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1baf28: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1baf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1baf2c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1baf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1baf30: 0xc44000ac  lwc1        $f0, 0xAC($v0)
    ctx->pc = 0x1baf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1baf34: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1baf34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1baf38: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1baf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1baf3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1baf3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baf40: 0x0  nop
    ctx->pc = 0x1baf40u;
    // NOP
    // 0x1baf44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1baf44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1baf48: 0x45010048  bc1t        . + 4 + (0x48 << 2)
    ctx->pc = 0x1BAF48u;
    {
        const bool branch_taken_0x1baf48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1baf48) {
            ctx->pc = 0x1BB06Cu;
            goto label_1bb06c;
        }
    }
    ctx->pc = 0x1BAF50u;
    // 0x1baf50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1baf50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1baf54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf58: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1BAF58u;
    {
        const bool branch_taken_0x1baf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baf58) {
            ctx->pc = 0x1BAFE8u;
            goto label_1bafe8;
        }
    }
    ctx->pc = 0x1BAF60u;
label_1baf60:
    // 0x1baf60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1baf60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf64: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1BAF64u;
    {
        const bool branch_taken_0x1baf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baf64) {
            ctx->pc = 0x1BAFD0u;
            goto label_1bafd0;
        }
    }
    ctx->pc = 0x1BAF6Cu;
label_1baf6c:
    // 0x1baf6c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1baf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1baf70: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1baf70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1baf74: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x1baf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1baf78: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1baf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1baf7c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1baf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1baf80: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1baf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1baf84: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1baf84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1baf88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1baf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1baf8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1baf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1baf90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1baf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1baf94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1baf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1baf98: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BAF98u;
    {
        const bool branch_taken_0x1baf98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1baf98) {
            ctx->pc = 0x1BAFCCu;
            goto label_1bafcc;
        }
    }
    ctx->pc = 0x1BAFA0u;
    // 0x1bafa0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1bafa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bafa4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1bafa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1bafa8: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x1bafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1bafac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1bafacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bafb0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1bafb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bafb4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bafb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bafb8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bafb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bafbc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bafbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bafc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bafc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bafc4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1bafc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1bafc8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bafc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1bafcc:
    // 0x1bafcc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bafccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bafd0:
    // 0x1bafd0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bafd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bafd4: 0x8c42be58  lw          $v0, -0x41A8($v0)
    ctx->pc = 0x1bafd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1bafd8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1bafd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bafdc: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1BAFDCu;
    {
        const bool branch_taken_0x1bafdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bafdc) {
            ctx->pc = 0x1BAF6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1baf6c;
        }
    }
    ctx->pc = 0x1BAFE4u;
    // 0x1bafe4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bafe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bafe8:
    // 0x1bafe8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bafe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bafec: 0x8c42be5c  lw          $v0, -0x41A4($v0)
    ctx->pc = 0x1bafecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE5Cu));
    // 0x1baff0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1baff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1baff4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1BAFF4u;
    {
        const bool branch_taken_0x1baff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1baff4) {
            ctx->pc = 0x1BAF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1baf60;
        }
    }
    ctx->pc = 0x1BAFFCu;
    // 0x1baffc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1baffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb000: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BB000u;
    {
        const bool branch_taken_0x1bb000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb000) {
            ctx->pc = 0x1BB044u;
            goto label_1bb044;
        }
    }
    ctx->pc = 0x1BB008u;
label_1bb008:
    // 0x1bb008: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1bb008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb00c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1BB00Cu;
    SET_GPR_U32(ctx, 31, 0x1BB014u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1BB00Cu, 0x1BB014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB014u;
label_1bb014:
    // 0x1bb014: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bb014u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb018: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1bb018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb01c: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1bb01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1bb020: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bb020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb024: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1BB024u;
    SET_GPR_U32(ctx, 31, 0x1BB02Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1BB024u, 0x1BB02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB02Cu;
label_1bb02c:
    // 0x1bb02c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bb02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb030: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1bb030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb034: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb038: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1BB038u;
    SET_GPR_U32(ctx, 31, 0x1BB040u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1BB038u, 0x1BB040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB040u;
label_1bb040:
    // 0x1bb040: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bb040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1bb044:
    // 0x1bb044: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1bb044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bb048: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1BB048u;
    {
        const bool branch_taken_0x1bb048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb048) {
            ctx->pc = 0x1BB008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb008;
        }
    }
    ctx->pc = 0x1BB050u;
    // 0x1bb050: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1bb050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1bb054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bb054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb058: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1bb058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb05c: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x1bb05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x1bb060: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1bb060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb064: 0xc06ee04  jal         func_1BB810
    ctx->pc = 0x1BB064u;
    SET_GPR_U32(ctx, 31, 0x1BB06Cu);
    ctx->pc = 0x1BB810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB810u, 0x1BB064u, 0x1BB06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB06Cu;
label_1bb06c:
    // 0x1bb06c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb070: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1BB070u;
    {
        const bool branch_taken_0x1bb070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb070) {
            ctx->pc = 0x1BB1CCu;
            goto label_1bb1cc;
        }
    }
    ctx->pc = 0x1BB078u;
label_1bb078:
    // 0x1bb078: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1bb078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb07c: 0x904200a8  lbu         $v0, 0xA8($v0)
    ctx->pc = 0x1bb07cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x1bb080: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BB080u;
    {
        const bool branch_taken_0x1bb080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb080) {
            ctx->pc = 0x1BB0D8u;
            goto label_1bb0d8;
        }
    }
    ctx->pc = 0x1BB088u;
    // 0x1bb088: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1bb088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb08c: 0xc06fab0  jal         func_1BEAC0
    ctx->pc = 0x1BB08Cu;
    SET_GPR_U32(ctx, 31, 0x1BB094u);
    ctx->pc = 0x1BEAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAC0u, 0x1BB08Cu, 0x1BB094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB094u;
label_1bb094:
    // 0x1bb094: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bb094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bb098: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BB098u;
    {
        const bool branch_taken_0x1bb098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb098) {
            ctx->pc = 0x1BB0D8u;
            goto label_1bb0d8;
        }
    }
    ctx->pc = 0x1BB0A0u;
    // 0x1bb0a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bb0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bb0a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1bb0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bb0a8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1bb0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1bb0ac: 0x278595b0  addiu       $a1, $gp, -0x6A50
    ctx->pc = 0x1bb0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940080));
    // 0x1bb0b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb0b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb0b4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1bb0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb0b8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1BB0B8u;
    SET_GPR_U32(ctx, 31, 0x1BB0C0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1BB0B8u, 0x1BB0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0C0u;
label_1bb0c0:
    // 0x1bb0c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb0c4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1bb0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb0c8: 0xa04300b0  sb          $v1, 0xB0($v0)
    ctx->pc = 0x1bb0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 176), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bb0cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb0d0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1BB0D0u;
    {
        const bool branch_taken_0x1bb0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb0d0) {
            ctx->pc = 0x1BB1CCu;
            goto label_1bb1cc;
        }
    }
    ctx->pc = 0x1BB0D8u;
label_1bb0d8:
    // 0x1bb0d8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1bb0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb0dc: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1bb0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb0e0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1bb0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb0e4: 0xc44008d8  lwc1        $f0, 0x8D8($v0)
    ctx->pc = 0x1bb0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb0e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1bb0e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bb0ec: 0xc78082dc  lwc1        $f0, -0x7D24($gp)
    ctx->pc = 0x1bb0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb0f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bb0f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb0f4: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x1BB0F4u;
    {
        const bool branch_taken_0x1bb0f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb0f4) {
            ctx->pc = 0x1BB14Cu;
            goto label_1bb14c;
        }
    }
    ctx->pc = 0x1BB0FCu;
    // 0x1bb0fc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1bb0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb100: 0x904208e4  lbu         $v0, 0x8E4($v0)
    ctx->pc = 0x1bb100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2276)));
    // 0x1bb104: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB104u;
    {
        const bool branch_taken_0x1bb104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb104) {
            ctx->pc = 0x1BB128u;
            goto label_1bb128;
        }
    }
    ctx->pc = 0x1BB10Cu;
    // 0x1bb10c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1bb10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb110: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1bb110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bb114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb118: 0xc0702fc  jal         func_1C0BF0
    ctx->pc = 0x1BB118u;
    SET_GPR_U32(ctx, 31, 0x1BB120u);
    ctx->pc = 0x1C0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0BF0u, 0x1BB118u, 0x1BB120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB120u;
label_1bb120:
    // 0x1bb120: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BB120u;
    {
        const bool branch_taken_0x1bb120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb120) {
            ctx->pc = 0x1BB14Cu;
            goto label_1bb14c;
        }
    }
    ctx->pc = 0x1BB128u;
label_1bb128:
    // 0x1bb128: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1bb128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb12c: 0x904208e5  lbu         $v0, 0x8E5($v0)
    ctx->pc = 0x1bb12cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2277)));
    // 0x1bb130: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB130u;
    {
        const bool branch_taken_0x1bb130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb130) {
            ctx->pc = 0x1BB14Cu;
            goto label_1bb14c;
        }
    }
    ctx->pc = 0x1BB138u;
    // 0x1bb138: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1bb138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb13c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bb13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb140: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb144: 0xc0702fc  jal         func_1C0BF0
    ctx->pc = 0x1BB144u;
    SET_GPR_U32(ctx, 31, 0x1BB14Cu);
    ctx->pc = 0x1C0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0BF0u, 0x1BB144u, 0x1BB14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB14Cu;
label_1bb14c:
    // 0x1bb14c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1bb14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb150: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1bb150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb154: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1bb154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb158: 0xc44008d4  lwc1        $f0, 0x8D4($v0)
    ctx->pc = 0x1bb158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb15c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1bb15cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bb160: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1bb160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1bb164: 0xc440be70  lwc1        $f0, -0x4190($v0)
    ctx->pc = 0x1bb164u;
    { uint32_t bits = FAST_READ32(0x60BE70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb168: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bb168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb16c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB16Cu;
    {
        const bool branch_taken_0x1bb16c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bb16c) {
            ctx->pc = 0x1BB188u;
            goto label_1bb188;
        }
    }
    ctx->pc = 0x1BB174u;
    // 0x1bb174: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1bb174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb17c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1bb17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bb180: 0xc0702fc  jal         func_1C0BF0
    ctx->pc = 0x1BB180u;
    SET_GPR_U32(ctx, 31, 0x1BB188u);
    ctx->pc = 0x1C0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0BF0u, 0x1BB180u, 0x1BB188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB188u;
label_1bb188:
    // 0x1bb188: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1bb188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb18c: 0xc070658  jal         func_1C1960
    ctx->pc = 0x1BB18Cu;
    SET_GPR_U32(ctx, 31, 0x1BB194u);
    ctx->pc = 0x1C1960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1960u, 0x1BB18Cu, 0x1BB194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB194u;
label_1bb194:
    // 0x1bb194: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1bb194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb198: 0xc0704c0  jal         func_1C1300
    ctx->pc = 0x1BB198u;
    SET_GPR_U32(ctx, 31, 0x1BB1A0u);
    ctx->pc = 0x1C1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1300u, 0x1BB198u, 0x1BB1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1A0u;
label_1bb1a0:
    // 0x1bb1a0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BB1A0u;
    {
        const bool branch_taken_0x1bb1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb1a0) {
            ctx->pc = 0x1BB1C8u;
            goto label_1bb1c8;
        }
    }
    ctx->pc = 0x1BB1A8u;
    // 0x1bb1a8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1bb1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb1ac: 0xc0702a8  jal         func_1C0AA0
    ctx->pc = 0x1BB1ACu;
    SET_GPR_U32(ctx, 31, 0x1BB1B4u);
    ctx->pc = 0x1C0AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0AA0u, 0x1BB1ACu, 0x1BB1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1B4u;
label_1bb1b4:
    // 0x1bb1b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB1B4u;
    {
        const bool branch_taken_0x1bb1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb1b4) {
            ctx->pc = 0x1BB1C8u;
            goto label_1bb1c8;
        }
    }
    ctx->pc = 0x1BB1BCu;
    // 0x1bb1bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb1c0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1bb1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bb1c4: 0xa04300a8  sb          $v1, 0xA8($v0)
    ctx->pc = 0x1bb1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 168), (uint8_t)GPR_U32(ctx, 3));
label_1bb1c8:
    // 0x1bb1c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb1cc:
    // 0x1bb1cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bb1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bb1d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bb1d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb1d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bb1d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb1d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb1d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb1dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb1dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb1e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb1e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb1e4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1bb1e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bb1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB1F0u;
    // 0x1bb1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb1f4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1bb1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1bb1f8: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1bb1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1bb1fc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1bb1fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bb200: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB208u;
    // 0x1bb208: 0x0  nop
    ctx->pc = 0x1bb208u;
    // NOP
    // 0x1bb20c: 0x0  nop
    ctx->pc = 0x1bb20cu;
    // NOP
    ctx->pc = 0x1bb210u;
}
