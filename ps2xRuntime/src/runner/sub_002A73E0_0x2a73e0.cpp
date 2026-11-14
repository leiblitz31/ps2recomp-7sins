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

// Function: sub_002A73E0
// Address: 0x2a73e0 - 0x2a74e0
void sub_002A73E0_0x2a73e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A73E0_0x2a73e0");
#endif

    switch (ctx->pc) {
        case 0x2a7410u: goto label_2a7410;
        case 0x2a7424u: goto label_2a7424;
        case 0x2a7434u: goto label_2a7434;
        case 0x2a747cu: goto label_2a747c;
        case 0x2a748cu: goto label_2a748c;
        case 0x2a74a4u: goto label_2a74a4;
        case 0x2a74b8u: goto label_2a74b8;
        default: break;
    }

    ctx->pc = 0x2a73e0u;

    // 0x2a73e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a73e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a73e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a73e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a73e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a73e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a73ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a73ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a73f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a73f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a73f4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2a73f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2a73f8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2a73f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2a73fc: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x2a73fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7400: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2a7400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2a7404: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2a7404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2a7408: 0xc0858ac  jal         func_2162B0
    ctx->pc = 0x2A7408u;
    SET_GPR_U32(ctx, 31, 0x2A7410u);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2A7408u, 0x2A7410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7410u;
label_2a7410:
    // 0x2a7410: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2a7410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2a7414: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2a7414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2a7418: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a7418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a741c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A741Cu;
    SET_GPR_U32(ctx, 31, 0x2A7424u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A741Cu, 0x2A7424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7424u;
label_2a7424:
    // 0x2a7424: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a7424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7428: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a7428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a742c: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x2A742Cu;
    SET_GPR_U32(ctx, 31, 0x2A7434u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x2A742Cu, 0x2A7434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7434u;
label_2a7434:
    // 0x2a7434: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a7434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7438: 0x9202011c  lbu         $v0, 0x11C($s0)
    ctx->pc = 0x2a7438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2a743c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A743Cu;
    {
        const bool branch_taken_0x2a743c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a743c) {
            ctx->pc = 0x2A746Cu;
            goto label_2a746c;
        }
    }
    ctx->pc = 0x2A7444u;
    // 0x2a7444: 0x9202011c  lbu         $v0, 0x11C($s0)
    ctx->pc = 0x2a7444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2a7448: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A7448u;
    {
        const bool branch_taken_0x2a7448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7448) {
            ctx->pc = 0x2A7498u;
            goto label_2a7498;
        }
    }
    ctx->pc = 0x2A7450u;
    // 0x2a7450: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x2a7450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7454: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a7454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2a7458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a745c: 0x0  nop
    ctx->pc = 0x2a745cu;
    // NOP
    // 0x2a7460: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a7460u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7464: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2A7464u;
    {
        const bool branch_taken_0x2a7464 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7464) {
            ctx->pc = 0x2A7498u;
            goto label_2a7498;
        }
    }
    ctx->pc = 0x2A746Cu;
label_2a746c:
    // 0x2a746c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a746cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7470: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a7470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a7474: 0xc09d250  jal         func_274940
    ctx->pc = 0x2A7474u;
    SET_GPR_U32(ctx, 31, 0x2A747Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2A7474u, 0x2A747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A747Cu;
label_2a747c:
    // 0x2a747c: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2a747cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2a7480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a7480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7484: 0xc121904  jal         func_486410
    ctx->pc = 0x2A7484u;
    SET_GPR_U32(ctx, 31, 0x2A748Cu);
    ctx->pc = 0x486410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486410u, 0x2A7484u, 0x2A748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A748Cu;
label_2a748c:
    // 0x2a748c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a748cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7490: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A7490u;
    {
        const bool branch_taken_0x2a7490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7490) {
            ctx->pc = 0x2A74BCu;
            goto label_2a74bc;
        }
    }
    ctx->pc = 0x2A7498u;
label_2a7498:
    // 0x2a7498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a7498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a749c: 0xc1218cc  jal         func_486330
    ctx->pc = 0x2A749Cu;
    SET_GPR_U32(ctx, 31, 0x2A74A4u);
    ctx->pc = 0x486330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486330u, 0x2A749Cu, 0x2A74A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A74A4u;
label_2a74a4:
    // 0x2a74a4: 0xc7818208  lwc1        $f1, -0x7DF8($gp)
    ctx->pc = 0x2a74a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a74a8: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x2a74a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a74ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a74acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74b0: 0xc121b88  jal         func_486E20
    ctx->pc = 0x2A74B0u;
    SET_GPR_U32(ctx, 31, 0x2A74B8u);
    ctx->pc = 0x486E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486E20u, 0x2A74B0u, 0x2A74B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A74B8u;
label_2a74b8:
    // 0x2a74b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a74bc:
    // 0x2a74bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a74bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a74c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a74c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a74c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a74c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a74c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a74c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a74cc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2a74ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a74d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A74D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A74D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A74D8u;
    // 0x2a74d8: 0x0  nop
    ctx->pc = 0x2a74d8u;
    // NOP
    // 0x2a74dc: 0x0  nop
    ctx->pc = 0x2a74dcu;
    // NOP
    ctx->pc = 0x2a74e0u;
}
