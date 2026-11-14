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

// Function: sub_00231270
// Address: 0x231270 - 0x231340
void sub_00231270_0x231270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231270_0x231270");
#endif

    switch (ctx->pc) {
        case 0x231290u: goto label_231290;
        case 0x2312e8u: goto label_2312e8;
        case 0x2312f4u: goto label_2312f4;
        case 0x231314u: goto label_231314;
        case 0x231320u: goto label_231320;
        default: break;
    }

    ctx->pc = 0x231270u;

    // 0x231270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x231278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23127c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23127cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x231280: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x231280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231284: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x231284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231288: 0xc08c200  jal         func_230800
    ctx->pc = 0x231288u;
    SET_GPR_U32(ctx, 31, 0x231290u);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x231288u, 0x231290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231290u;
label_231290:
    // 0x231290: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231290u;
    {
        const bool branch_taken_0x231290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231290) {
            ctx->pc = 0x2312A8u;
            goto label_2312a8;
        }
    }
    ctx->pc = 0x231298u;
    // 0x231298: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x231298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x23129c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23129cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2312a0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2312A0u;
    {
        const bool branch_taken_0x2312a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2312a0) {
            ctx->pc = 0x231330u;
            goto label_231330;
        }
    }
    ctx->pc = 0x2312A8u;
label_2312a8:
    // 0x2312a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2312a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2312ac: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x2312acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x2312b0: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x2312b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2312b4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2312B4u;
    {
        const bool branch_taken_0x2312b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2312b4) {
            ctx->pc = 0x2312FCu;
            goto label_2312fc;
        }
    }
    ctx->pc = 0x2312BCu;
    // 0x2312bc: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x2312bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2312c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2312C0u;
    {
        const bool branch_taken_0x2312c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2312c0) {
            ctx->pc = 0x2312D0u;
            goto label_2312d0;
        }
    }
    ctx->pc = 0x2312C8u;
    // 0x2312c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2312C8u;
    {
        const bool branch_taken_0x2312c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2312c8) {
            ctx->pc = 0x231328u;
            goto label_231328;
        }
    }
    ctx->pc = 0x2312D0u;
label_2312d0:
    // 0x2312d0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2312d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2312d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2312d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2312d8: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x2312d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x2312dc: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x2312dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x2312e0: 0xc08c248  jal         func_230920
    ctx->pc = 0x2312E0u;
    SET_GPR_U32(ctx, 31, 0x2312E8u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x2312E0u, 0x2312E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2312E8u;
label_2312e8:
    // 0x2312e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2312e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2312ec: 0xc11cb38  jal         func_472CE0
    ctx->pc = 0x2312ECu;
    SET_GPR_U32(ctx, 31, 0x2312F4u);
    ctx->pc = 0x472CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472CE0u, 0x2312ECu, 0x2312F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2312F4u;
label_2312f4:
    // 0x2312f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2312F4u;
    {
        const bool branch_taken_0x2312f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2312f4) {
            ctx->pc = 0x231330u;
            goto label_231330;
        }
    }
    ctx->pc = 0x2312FCu;
label_2312fc:
    // 0x2312fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2312fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231300: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x231300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231304: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x231304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x231308: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x231308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x23130c: 0xc08c1f0  jal         func_2307C0
    ctx->pc = 0x23130Cu;
    SET_GPR_U32(ctx, 31, 0x231314u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x23130Cu, 0x231314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231314u;
label_231314:
    // 0x231314: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x231314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231318: 0xc11cb38  jal         func_472CE0
    ctx->pc = 0x231318u;
    SET_GPR_U32(ctx, 31, 0x231320u);
    ctx->pc = 0x472CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472CE0u, 0x231318u, 0x231320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231320u;
label_231320:
    // 0x231320: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x231320u;
    {
        const bool branch_taken_0x231320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231320) {
            ctx->pc = 0x231330u;
            goto label_231330;
        }
    }
    ctx->pc = 0x231328u;
label_231328:
    // 0x231328: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x231328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x23132c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23132cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231330:
    // 0x231330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231334: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x231334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x231338: 0x3e00008  jr          $ra
    ctx->pc = 0x231338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231340u;
}
