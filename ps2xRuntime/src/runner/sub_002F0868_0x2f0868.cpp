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

// Function: sub_002F0868
// Address: 0x2f0868 - 0x2f08d0
void sub_002F0868_0x2f0868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0868_0x2f0868");
#endif

    ctx->pc = 0x2f0868u;

    // 0x2f0868: 0x78900000  lq          $s0, 0x0($a0)
    ctx->pc = 0x2f0868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f086c: 0x78910010  lq          $s1, 0x10($a0)
    ctx->pc = 0x2f086cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f0870: 0x78920020  lq          $s2, 0x20($a0)
    ctx->pc = 0x2f0870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2f0874: 0x78930030  lq          $s3, 0x30($a0)
    ctx->pc = 0x2f0874u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2f0878: 0x78940040  lq          $s4, 0x40($a0)
    ctx->pc = 0x2f0878u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2f087c: 0x78950050  lq          $s5, 0x50($a0)
    ctx->pc = 0x2f087cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2f0880: 0x78960060  lq          $s6, 0x60($a0)
    ctx->pc = 0x2f0880u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2f0884: 0x78970070  lq          $s7, 0x70($a0)
    ctx->pc = 0x2f0884u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2f0888: 0x789e0080  lq          $fp, 0x80($a0)
    ctx->pc = 0x2f0888u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f088c: 0xc4980090  lwc1        $f24, 0x90($a0)
    ctx->pc = 0x2f088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2f0890: 0xc4990094  lwc1        $f25, 0x94($a0)
    ctx->pc = 0x2f0890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2f0894: 0xc49a0098  lwc1        $f26, 0x98($a0)
    ctx->pc = 0x2f0894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2f0898: 0xc49b009c  lwc1        $f27, 0x9C($a0)
    ctx->pc = 0x2f0898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2f089c: 0xc49c00a0  lwc1        $f28, 0xA0($a0)
    ctx->pc = 0x2f089cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2f08a0: 0xc49d00a4  lwc1        $f29, 0xA4($a0)
    ctx->pc = 0x2f08a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2f08a4: 0xc49e00a8  lwc1        $f30, 0xA8($a0)
    ctx->pc = 0x2f08a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x2f08a8: 0xc49f00ac  lwc1        $f31, 0xAC($a0)
    ctx->pc = 0x2f08a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2f08ac: 0x789d00b0  lq          $sp, 0xB0($a0)
    ctx->pc = 0x2f08acu;
    SET_GPR_VEC(ctx, 29, READ128(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x2f08b0: 0x789f00c0  lq          $ra, 0xC0($a0)
    ctx->pc = 0x2f08b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x2f08b4: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F08B4u;
    {
        const bool branch_taken_0x2f08b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f08b4) {
            ctx->pc = 0x2F08C0u;
            goto label_2f08c0;
        }
    }
    ctx->pc = 0x2F08BCu;
    // 0x2f08bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f08bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f08c0:
    // 0x2f08c0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f08c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f08c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F08C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F08C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F08CCu;
    // 0x2f08cc: 0x0  nop
    ctx->pc = 0x2f08ccu;
    // NOP
    ctx->pc = 0x2f08d0u;
}
