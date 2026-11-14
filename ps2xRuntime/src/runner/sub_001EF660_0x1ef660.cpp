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

// Function: sub_001EF660
// Address: 0x1ef660 - 0x1ef6d0
void sub_001EF660_0x1ef660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF660_0x1ef660");
#endif

    ctx->pc = 0x1ef660u;

    // 0x1ef660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ef660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ef664: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ef668: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1ef668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1ef66c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ef66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef670: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF670u;
    {
        const bool branch_taken_0x1ef670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef670) {
            ctx->pc = 0x1EF684u;
            goto label_1ef684;
        }
    }
    ctx->pc = 0x1EF678u;
    // 0x1ef678: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef67c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1EF67Cu;
    {
        const bool branch_taken_0x1ef67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef67c) {
            ctx->pc = 0x1EF6BCu;
            goto label_1ef6bc;
        }
    }
    ctx->pc = 0x1EF684u;
label_1ef684:
    // 0x1ef684: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ef684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef688: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1ef688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef68c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ef68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1ef690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef694: 0x0  nop
    ctx->pc = 0x1ef694u;
    // NOP
    // 0x1ef698: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ef698u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef69c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF69Cu;
    {
        const bool branch_taken_0x1ef69c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef69c) {
            ctx->pc = 0x1EF6B4u;
            goto label_1ef6b4;
        }
    }
    ctx->pc = 0x1EF6A4u;
    // 0x1ef6a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef6a8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1ef6a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef6ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF6ACu;
    {
        const bool branch_taken_0x1ef6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef6ac) {
            ctx->pc = 0x1EF6B8u;
            goto label_1ef6b8;
        }
    }
    ctx->pc = 0x1EF6B4u;
label_1ef6b4:
    // 0x1ef6b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ef6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef6b8:
    // 0x1ef6b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ef6b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ef6bc:
    // 0x1ef6bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef6c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ef6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ef6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF6CCu;
    // 0x1ef6cc: 0x0  nop
    ctx->pc = 0x1ef6ccu;
    // NOP
    ctx->pc = 0x1ef6d0u;
}
