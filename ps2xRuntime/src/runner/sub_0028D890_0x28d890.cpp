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

// Function: sub_0028D890
// Address: 0x28d890 - 0x28d9b0
void sub_0028D890_0x28d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D890_0x28d890");
#endif

    switch (ctx->pc) {
        case 0x28d8ccu: goto label_28d8cc;
        case 0x28d8e8u: goto label_28d8e8;
        case 0x28d90cu: goto label_28d90c;
        case 0x28d928u: goto label_28d928;
        case 0x28d958u: goto label_28d958;
        case 0x28d98cu: goto label_28d98c;
        default: break;
    }

    ctx->pc = 0x28d890u;

    // 0x28d890: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28d890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28d894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28d894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28d898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28d89c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28d89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28d8a0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x28d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x28d8a4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x28d8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x28d8a8: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x28d8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x28d8ac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x28d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d8b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x28d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d8b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D8B4u;
    {
        const bool branch_taken_0x28d8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d8b4) {
            ctx->pc = 0x28D8D8u;
            goto label_28d8d8;
        }
    }
    ctx->pc = 0x28D8BCu;
    // 0x28d8bc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x28d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d8c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d8c4: 0xc094d24  jal         func_253490
    ctx->pc = 0x28D8C4u;
    SET_GPR_U32(ctx, 31, 0x28D8CCu);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x28D8C4u, 0x28D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D8CCu;
label_28d8cc:
    // 0x28d8cc: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x28d8ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28d8d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28D8D0u;
    {
        const bool branch_taken_0x28d8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d8d0) {
            ctx->pc = 0x28D8DCu;
            goto label_28d8dc;
        }
    }
    ctx->pc = 0x28D8D8u;
label_28d8d8:
    // 0x28d8d8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28d8d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28d8dc:
    // 0x28d8dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28d8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d8e0: 0xc04d634  jal         func_1358D0
    ctx->pc = 0x28D8E0u;
    SET_GPR_U32(ctx, 31, 0x28D8E8u);
    ctx->pc = 0x1358D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1358D0u, 0x28D8E0u, 0x28D8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D8E8u;
label_28d8e8:
    // 0x28d8e8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x28d8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x28d8ec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x28d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d8f0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x28d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28d8f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D8F4u;
    {
        const bool branch_taken_0x28d8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d8f4) {
            ctx->pc = 0x28D918u;
            goto label_28d918;
        }
    }
    ctx->pc = 0x28D8FCu;
    // 0x28d8fc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x28d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d900: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x28d900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28d904: 0xc094d24  jal         func_253490
    ctx->pc = 0x28D904u;
    SET_GPR_U32(ctx, 31, 0x28D90Cu);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x28D904u, 0x28D90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D90Cu;
label_28d90c:
    // 0x28d90c: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x28d90cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28d910: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28D910u;
    {
        const bool branch_taken_0x28d910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d910) {
            ctx->pc = 0x28D91Cu;
            goto label_28d91c;
        }
    }
    ctx->pc = 0x28D918u;
label_28d918:
    // 0x28d918: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x28d918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28d91c:
    // 0x28d91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d920: 0xc04d634  jal         func_1358D0
    ctx->pc = 0x28D920u;
    SET_GPR_U32(ctx, 31, 0x28D928u);
    ctx->pc = 0x1358D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1358D0u, 0x28D920u, 0x28D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D928u;
label_28d928:
    // 0x28d928: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x28d928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x28d92c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x28d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d930: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x28d930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28d934: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x28d934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x28d938: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28D938u;
    {
        const bool branch_taken_0x28d938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d938) {
            ctx->pc = 0x28D960u;
            goto label_28d960;
        }
    }
    ctx->pc = 0x28D940u;
    // 0x28d940: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x28d940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d944: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x28d944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d948: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x28d948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d94c: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x28d94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28d950: 0xc0a2bec  jal         func_28AFB0
    ctx->pc = 0x28D950u;
    SET_GPR_U32(ctx, 31, 0x28D958u);
    ctx->pc = 0x28AFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AFB0u, 0x28D950u, 0x28D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D958u;
label_28d958:
    // 0x28d958: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x28d958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d95c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x28d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_28d960:
    // 0x28d960: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x28d960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28d964: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x28d964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d968: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x28d968u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d96c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x28D96Cu;
    {
        const bool branch_taken_0x28d96c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28d96c) {
            ctx->pc = 0x28D994u;
            goto label_28d994;
        }
    }
    ctx->pc = 0x28D974u;
    // 0x28d974: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x28d974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d978: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x28d978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28d97c: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x28d97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d980: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x28d980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28d984: 0xc0a24b8  jal         func_2892E0
    ctx->pc = 0x28D984u;
    SET_GPR_U32(ctx, 31, 0x28D98Cu);
    ctx->pc = 0x2892E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2892E0u, 0x28D984u, 0x28D98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D98Cu;
label_28d98c:
    // 0x28d98c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x28d98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d990: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x28d990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_28d994:
    // 0x28d994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28d994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d998: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28d998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d99c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28d99cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d9a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28d9a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d9a4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x28d9a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28d9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x28D9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D9B0u;
}
