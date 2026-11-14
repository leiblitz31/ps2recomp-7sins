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

// Function: sub_002C1850
// Address: 0x2c1850 - 0x2c1950
void sub_002C1850_0x2c1850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1850_0x2c1850");
#endif

    ctx->pc = 0x2c1850u;

    // 0x2c1850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c1850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c1854: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2c1854u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c1858: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c1858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c185c: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x2c185cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
    // 0x2c1860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1864: 0x0  nop
    ctx->pc = 0x2c1864u;
    // NOP
    // 0x2c1868: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c1868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c186c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C186Cu;
    {
        const bool branch_taken_0x2c186c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c186c) {
            ctx->pc = 0x2C1880u;
            goto label_2c1880;
        }
    }
    ctx->pc = 0x2C1874u;
    // 0x2c1874: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c1874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1878: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2C1878u;
    {
        const bool branch_taken_0x2c1878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1878) {
            ctx->pc = 0x2C1938u;
            goto label_2c1938;
        }
    }
    ctx->pc = 0x2C1880u;
label_2c1880:
    // 0x2c1880: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c1880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1884: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x2c1884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
    // 0x2c1888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c188c: 0x0  nop
    ctx->pc = 0x2c188cu;
    // NOP
    // 0x2c1890: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c1890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1894: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1894u;
    {
        const bool branch_taken_0x2c1894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1894) {
            ctx->pc = 0x2C18ACu;
            goto label_2c18ac;
        }
    }
    ctx->pc = 0x2C189Cu;
    // 0x2c189c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c189cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c18a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c18a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c18a4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2C18A4u;
    {
        const bool branch_taken_0x2c18a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c18a4) {
            ctx->pc = 0x2C1938u;
            goto label_2c1938;
        }
    }
    ctx->pc = 0x2C18ACu;
label_2c18ac:
    // 0x2c18ac: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c18acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c18b0: 0x3c02424c  lui         $v0, 0x424C
    ctx->pc = 0x2c18b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16972 << 16));
    // 0x2c18b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c18b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c18b8: 0x0  nop
    ctx->pc = 0x2c18b8u;
    // NOP
    // 0x2c18bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c18bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c18c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C18C0u;
    {
        const bool branch_taken_0x2c18c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c18c0) {
            ctx->pc = 0x2C18D8u;
            goto label_2c18d8;
        }
    }
    ctx->pc = 0x2C18C8u;
    // 0x2c18c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2c18c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2c18cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c18ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c18d0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C18D0u;
    {
        const bool branch_taken_0x2c18d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c18d0) {
            ctx->pc = 0x2C1938u;
            goto label_2c1938;
        }
    }
    ctx->pc = 0x2C18D8u;
label_2c18d8:
    // 0x2c18d8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c18d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c18dc: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x2c18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x2c18e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c18e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c18e4: 0x0  nop
    ctx->pc = 0x2c18e4u;
    // NOP
    // 0x2c18e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c18e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c18ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C18ECu;
    {
        const bool branch_taken_0x2c18ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c18ec) {
            ctx->pc = 0x2C1904u;
            goto label_2c1904;
        }
    }
    ctx->pc = 0x2C18F4u;
    // 0x2c18f4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2c18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2c18f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c18f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c18fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C18FCu;
    {
        const bool branch_taken_0x2c18fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c18fc) {
            ctx->pc = 0x2C1938u;
            goto label_2c1938;
        }
    }
    ctx->pc = 0x2C1904u;
label_2c1904:
    // 0x2c1904: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2c1904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1908: 0x3c0242a8  lui         $v0, 0x42A8
    ctx->pc = 0x2c1908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17064 << 16));
    // 0x2c190c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c190cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1910: 0x0  nop
    ctx->pc = 0x2c1910u;
    // NOP
    // 0x2c1914: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c1914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1918: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1918u;
    {
        const bool branch_taken_0x2c1918 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1918) {
            ctx->pc = 0x2C1930u;
            goto label_2c1930;
        }
    }
    ctx->pc = 0x2C1920u;
    // 0x2c1920: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2c1920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2c1924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1928: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1928u;
    {
        const bool branch_taken_0x2c1928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1928) {
            ctx->pc = 0x2C1938u;
            goto label_2c1938;
        }
    }
    ctx->pc = 0x2C1930u;
label_2c1930:
    // 0x2c1930: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2c1930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2c1934: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c1938:
    // 0x2c1938: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c1938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c193c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C193Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C193Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1944u;
    // 0x2c1944: 0x0  nop
    ctx->pc = 0x2c1944u;
    // NOP
    // 0x2c1948: 0x0  nop
    ctx->pc = 0x2c1948u;
    // NOP
    // 0x2c194c: 0x0  nop
    ctx->pc = 0x2c194cu;
    // NOP
    ctx->pc = 0x2c1950u;
}
