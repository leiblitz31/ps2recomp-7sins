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

// Function: sub_001653E0
// Address: 0x1653e0 - 0x165580
void sub_001653E0_0x1653e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001653E0_0x1653e0");
#endif

    switch (ctx->pc) {
        case 0x1653fcu: goto label_1653fc;
        case 0x16543cu: goto label_16543c;
        case 0x16547cu: goto label_16547c;
        case 0x1654c8u: goto label_1654c8;
        case 0x165514u: goto label_165514;
        case 0x165554u: goto label_165554;
        default: break;
    }

    ctx->pc = 0x1653e0u;

    // 0x1653e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1653e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1653e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1653e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1653e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1653e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1653ec: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1653ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1653f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1653f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1653f4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1653F4u;
    {
        const bool branch_taken_0x1653f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1653f4) {
            ctx->pc = 0x165558u;
            goto label_165558;
        }
    }
    ctx->pc = 0x1653FCu;
label_1653fc:
    // 0x1653fc: 0xc78080ac  lwc1        $f0, -0x7F54($gp)
    ctx->pc = 0x1653fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165400: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x165400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x165404: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x165404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165408: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x165408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x16540c: 0x16020030  bne         $s0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x16540Cu;
    {
        const bool branch_taken_0x16540c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x16540c) {
            ctx->pc = 0x1654D0u;
            goto label_1654d0;
        }
    }
    ctx->pc = 0x165414u;
    // 0x165414: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x165414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165418: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x165418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16541c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x16541cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x165420: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x165420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x165424: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x165424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16542c: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x16542cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x165430: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x165430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x165434: 0xc08c910  jal         func_232440
    ctx->pc = 0x165434u;
    SET_GPR_U32(ctx, 31, 0x16543Cu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x165434u, 0x16543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16543Cu;
label_16543c:
    // 0x16543c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x16543cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165440: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x165440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165444: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x165444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x165448: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x165448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16544c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16544cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165454: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x165454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x165458: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x165458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16545c: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16545cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x165460: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x165460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165464: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x165464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x165468: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x165468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16546c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16546cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165470: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x165470u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165474: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x165474u;
    SET_GPR_U32(ctx, 31, 0x16547Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x165474u, 0x16547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16547Cu;
label_16547c:
    // 0x16547c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x16547cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x165480: 0xdf828e70  ld          $v0, -0x7190($gp)
    ctx->pc = 0x165480u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x165484: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x165484u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x165488: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x165488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16548c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16548cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165490: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x165490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x165494: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x165494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x165498: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x165498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16549c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16549cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1654a0: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x1654a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1654a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1654a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1654a8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x1654a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1654ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1654acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1654b0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1654b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1654b4: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x1654b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1654b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1654b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1654bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1654bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1654c0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1654C0u;
    SET_GPR_U32(ctx, 31, 0x1654C8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1654C0u, 0x1654C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1654C8u;
label_1654c8:
    // 0x1654c8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1654C8u;
    {
        const bool branch_taken_0x1654c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1654c8) {
            ctx->pc = 0x165554u;
            goto label_165554;
        }
    }
    ctx->pc = 0x1654D0u;
label_1654d0:
    // 0x1654d0: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x1654d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1654d4: 0xdf828e78  ld          $v0, -0x7188($gp)
    ctx->pc = 0x1654d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938232)));
    // 0x1654d8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1654d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1654dc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1654dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1654e0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1654e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1654e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1654e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1654e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1654e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1654ec: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x1654ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1654f0: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x1654f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1654f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1654f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1654f8: 0x27a70028  addiu       $a3, $sp, 0x28
    ctx->pc = 0x1654f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1654fc: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x1654fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x165500: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x165500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x165504: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x165504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165508: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x165508u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16550c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16550Cu;
    SET_GPR_U32(ctx, 31, 0x165514u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16550Cu, 0x165514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165514u;
label_165514:
    // 0x165514: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x165514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x165518: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x165518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x16551c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x16551cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165520: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x165520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x165524: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x165524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16552c: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x16552cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x165530: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x165530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x165534: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x165534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165538: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x165538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x16553c: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x16553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x165540: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x165540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x165544: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x165544u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165548: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x165548u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16554c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16554Cu;
    SET_GPR_U32(ctx, 31, 0x165554u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16554Cu, 0x165554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165554u;
label_165554:
    // 0x165554: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x165554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_165558:
    // 0x165558: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x165558u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x16555c: 0x1460ffa7  bnez        $v1, . + 4 + (-0x59 << 2)
    ctx->pc = 0x16555Cu;
    {
        const bool branch_taken_0x16555c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16555c) {
            ctx->pc = 0x1653FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1653fc;
        }
    }
    ctx->pc = 0x165564u;
    // 0x165564: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16556c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x16556cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x165570: 0x3e00008  jr          $ra
    ctx->pc = 0x165570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165578u;
    // 0x165578: 0x0  nop
    ctx->pc = 0x165578u;
    // NOP
    // 0x16557c: 0x0  nop
    ctx->pc = 0x16557cu;
    // NOP
    ctx->pc = 0x165580u;
}
