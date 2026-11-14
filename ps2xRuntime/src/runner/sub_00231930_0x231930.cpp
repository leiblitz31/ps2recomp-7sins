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

// Function: sub_00231930
// Address: 0x231930 - 0x231a20
void sub_00231930_0x231930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231930_0x231930");
#endif

    switch (ctx->pc) {
        case 0x23195cu: goto label_23195c;
        case 0x2319b0u: goto label_2319b0;
        case 0x2319c8u: goto label_2319c8;
        case 0x2319e8u: goto label_2319e8;
        case 0x231a00u: goto label_231a00;
        default: break;
    }

    ctx->pc = 0x231930u;

    // 0x231930: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x231930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x231934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231938: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x231938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23193c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23193cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x231940: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x231940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x231944: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x231944u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x231948: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x231948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x23194c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23194cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231950: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x231950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231954: 0xc08c200  jal         func_230800
    ctx->pc = 0x231954u;
    SET_GPR_U32(ctx, 31, 0x23195Cu);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x231954u, 0x23195Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23195Cu;
label_23195c:
    // 0x23195c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23195Cu;
    {
        const bool branch_taken_0x23195c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23195c) {
            ctx->pc = 0x231970u;
            goto label_231970;
        }
    }
    ctx->pc = 0x231964u;
    // 0x231964: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x231964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231968: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x231968u;
    {
        const bool branch_taken_0x231968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231968) {
            ctx->pc = 0x231A0Cu;
            goto label_231a0c;
        }
    }
    ctx->pc = 0x231970u;
label_231970:
    // 0x231970: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231974: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x231974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x231978: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x231978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x23197c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x23197Cu;
    {
        const bool branch_taken_0x23197c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23197c) {
            ctx->pc = 0x2319D0u;
            goto label_2319d0;
        }
    }
    ctx->pc = 0x231984u;
    // 0x231984: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x231984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x231988: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231988u;
    {
        const bool branch_taken_0x231988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x231988) {
            ctx->pc = 0x231998u;
            goto label_231998;
        }
    }
    ctx->pc = 0x231990u;
    // 0x231990: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x231990u;
    {
        const bool branch_taken_0x231990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231990) {
            ctx->pc = 0x231A08u;
            goto label_231a08;
        }
    }
    ctx->pc = 0x231998u;
label_231998:
    // 0x231998: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x231998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23199c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2319a0: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x2319a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x2319a4: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x2319a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x2319a8: 0xc08c248  jal         func_230920
    ctx->pc = 0x2319A8u;
    SET_GPR_U32(ctx, 31, 0x2319B0u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x2319A8u, 0x2319B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319B0u;
label_2319b0:
    // 0x2319b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2319b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2319b4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2319b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2319b8: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x2319b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2319bc: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2319bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2319c0: 0xc11cfe0  jal         func_473F80
    ctx->pc = 0x2319C0u;
    SET_GPR_U32(ctx, 31, 0x2319C8u);
    ctx->pc = 0x473F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473F80u, 0x2319C0u, 0x2319C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319C8u;
label_2319c8:
    // 0x2319c8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2319C8u;
    {
        const bool branch_taken_0x2319c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2319c8) {
            ctx->pc = 0x231A0Cu;
            goto label_231a0c;
        }
    }
    ctx->pc = 0x2319D0u;
label_2319d0:
    // 0x2319d0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2319d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2319d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2319d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2319d8: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x2319d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x2319dc: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x2319dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x2319e0: 0xc08c1f0  jal         func_2307C0
    ctx->pc = 0x2319E0u;
    SET_GPR_U32(ctx, 31, 0x2319E8u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x2319E0u, 0x2319E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319E8u;
label_2319e8:
    // 0x2319e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2319e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2319ec: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2319ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2319f0: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x2319f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2319f4: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2319f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2319f8: 0xc11cfe0  jal         func_473F80
    ctx->pc = 0x2319F8u;
    SET_GPR_U32(ctx, 31, 0x231A00u);
    ctx->pc = 0x473F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473F80u, 0x2319F8u, 0x231A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A00u;
label_231a00:
    // 0x231a00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x231A00u;
    {
        const bool branch_taken_0x231a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231a00) {
            ctx->pc = 0x231A0Cu;
            goto label_231a0c;
        }
    }
    ctx->pc = 0x231A08u;
label_231a08:
    // 0x231a08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x231a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_231a0c:
    // 0x231a0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231a10: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x231a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x231a14: 0x3e00008  jr          $ra
    ctx->pc = 0x231A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231A1Cu;
    // 0x231a1c: 0x0  nop
    ctx->pc = 0x231a1cu;
    // NOP
    ctx->pc = 0x231a20u;
}
