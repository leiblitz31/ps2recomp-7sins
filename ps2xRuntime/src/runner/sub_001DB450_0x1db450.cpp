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

// Function: sub_001DB450
// Address: 0x1db450 - 0x1db530
void sub_001DB450_0x1db450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB450_0x1db450");
#endif

    ctx->pc = 0x1db450u;

    // 0x1db450: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1db450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1db454: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1db454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1db458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db45c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1db460: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x1db460u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1db464: 0xe7ad0050  swc1        $f13, 0x50($sp)
    ctx->pc = 0x1db464u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1db468: 0xe7ae0060  swc1        $f14, 0x60($sp)
    ctx->pc = 0x1db468u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1db46c: 0xe7af0070  swc1        $f15, 0x70($sp)
    ctx->pc = 0x1db46cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1db470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db474: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1db474u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1db478: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db47c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1db47cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1db480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db484: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1db484u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1db488: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1db488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db48c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1db48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1db490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1db490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db494: 0x0  nop
    ctx->pc = 0x1db494u;
    // NOP
    // 0x1db498: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1db498u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db49c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1DB49Cu;
    {
        const bool branch_taken_0x1db49c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db49c) {
            ctx->pc = 0x1DB4C4u;
            goto label_1db4c4;
        }
    }
    ctx->pc = 0x1DB4A4u;
    // 0x1db4a4: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1db4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db4a8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1db4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1db4ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1db4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db4b0: 0x0  nop
    ctx->pc = 0x1db4b0u;
    // NOP
    // 0x1db4b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1db4b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db4b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DB4B8u;
    {
        const bool branch_taken_0x1db4b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db4b8) {
            ctx->pc = 0x1DB4C4u;
            goto label_1db4c4;
        }
    }
    ctx->pc = 0x1DB4C0u;
    // 0x1db4c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1db4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db4c4:
    // 0x1db4c4: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DB4C4u;
    {
        const bool branch_taken_0x1db4c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db4c4) {
            ctx->pc = 0x1DB4ECu;
            goto label_1db4ec;
        }
    }
    ctx->pc = 0x1DB4CCu;
    // 0x1db4cc: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1db4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db4d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1db4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1db4d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1db4d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db4d8: 0x0  nop
    ctx->pc = 0x1db4d8u;
    // NOP
    // 0x1db4dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1db4dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db4e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DB4E0u;
    {
        const bool branch_taken_0x1db4e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db4e0) {
            ctx->pc = 0x1DB4ECu;
            goto label_1db4ec;
        }
    }
    ctx->pc = 0x1DB4E8u;
    // 0x1db4e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1db4e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db4ec:
    // 0x1db4ec: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DB4ECu;
    {
        const bool branch_taken_0x1db4ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db4ec) {
            ctx->pc = 0x1DB514u;
            goto label_1db514;
        }
    }
    ctx->pc = 0x1DB4F4u;
    // 0x1db4f4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1db4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1db4f8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1db4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1db4fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1db4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1db500: 0x0  nop
    ctx->pc = 0x1db500u;
    // NOP
    // 0x1db504: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1db504u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1db508: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DB508u;
    {
        const bool branch_taken_0x1db508 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1db508) {
            ctx->pc = 0x1DB514u;
            goto label_1db514;
        }
    }
    ctx->pc = 0x1DB510u;
    // 0x1db510: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1db510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db514:
    // 0x1db514: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1db514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db518: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1db518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db51c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db51cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db520: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db524: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1db524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1db528: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB530u;
}
