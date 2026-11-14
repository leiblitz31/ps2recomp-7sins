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

// Function: sub_002AA570
// Address: 0x2aa570 - 0x2aa660
void sub_002AA570_0x2aa570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA570_0x2aa570");
#endif

    switch (ctx->pc) {
        case 0x2aa5a4u: goto label_2aa5a4;
        case 0x2aa5d0u: goto label_2aa5d0;
        case 0x2aa5e0u: goto label_2aa5e0;
        case 0x2aa5f0u: goto label_2aa5f0;
        case 0x2aa620u: goto label_2aa620;
        case 0x2aa644u: goto label_2aa644;
        default: break;
    }

    ctx->pc = 0x2aa570u;

    // 0x2aa570: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2aa570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2aa574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aa574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2aa578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aa578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aa57c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aa580: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2aa580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2aa584: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2aa584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aa588: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x2aa588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2aa58c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA58Cu;
    {
        const bool branch_taken_0x2aa58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa58c) {
            ctx->pc = 0x2AA5ACu;
            goto label_2aa5ac;
        }
    }
    ctx->pc = 0x2AA594u;
    // 0x2aa594: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2aa594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aa598: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2aa598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2aa59c: 0xc09f9f0  jal         func_27E7C0
    ctx->pc = 0x2AA59Cu;
    SET_GPR_U32(ctx, 31, 0x2AA5A4u);
    ctx->pc = 0x27E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E7C0u, 0x2AA59Cu, 0x2AA5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA5A4u;
label_2aa5a4:
    // 0x2aa5a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA5A4u;
    {
        const bool branch_taken_0x2aa5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa5a4) {
            ctx->pc = 0x2AA5B8u;
            goto label_2aa5b8;
        }
    }
    ctx->pc = 0x2AA5ACu;
label_2aa5ac:
    // 0x2aa5ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa5acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa5b0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2AA5B0u;
    {
        const bool branch_taken_0x2aa5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa5b0) {
            ctx->pc = 0x2AA648u;
            goto label_2aa648;
        }
    }
    ctx->pc = 0x2AA5B8u;
label_2aa5b8:
    // 0x2aa5b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2aa5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aa5bc: 0x8c51003c  lw          $s1, 0x3C($v0)
    ctx->pc = 0x2aa5bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2aa5c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aa5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa5c4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2aa5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2aa5c8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2AA5C8u;
    SET_GPR_U32(ctx, 31, 0x2AA5D0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2AA5C8u, 0x2AA5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA5D0u;
label_2aa5d0:
    // 0x2aa5d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aa5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa5d8: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x2AA5D8u;
    SET_GPR_U32(ctx, 31, 0x2AA5E0u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x2AA5D8u, 0x2AA5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA5E0u;
label_2aa5e0:
    // 0x2aa5e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aa5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa5e4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2aa5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2aa5e8: 0xc121e84  jal         func_487A10
    ctx->pc = 0x2AA5E8u;
    SET_GPR_U32(ctx, 31, 0x2AA5F0u);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x2AA5E8u, 0x2AA5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA5F0u;
label_2aa5f0:
    // 0x2aa5f0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2aa5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2aa5f4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2aa5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa5f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2aa5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa5fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2aa5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa600: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2aa600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2aa604: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2aa604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2aa608: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2aa608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2aa60c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2aa60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aa610: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2aa610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2aa614: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2aa614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2aa618: 0xc0aa7c4  jal         func_2A9F10
    ctx->pc = 0x2AA618u;
    SET_GPR_U32(ctx, 31, 0x2AA620u);
    ctx->pc = 0x2A9F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9F10u, 0x2AA618u, 0x2AA620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA620u;
label_2aa620:
    // 0x2aa620: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2aa620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aa624: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2aa624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2aa628: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2aa628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2aa62c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aa62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aa630: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2aa630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa634: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2aa634u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2aa638: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x2aa638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2aa63c: 0xc0a6350  jal         func_298D40
    ctx->pc = 0x2AA63Cu;
    SET_GPR_U32(ctx, 31, 0x2AA644u);
    ctx->pc = 0x298D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298D40u, 0x2AA63Cu, 0x2AA644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA644u;
label_2aa644:
    // 0x2aa644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aa648:
    // 0x2aa648: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aa648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa64c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aa64cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa650: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa654: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2aa654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2aa658: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA660u;
}
