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

// Function: sub_00261990
// Address: 0x261990 - 0x261a00
void sub_00261990_0x261990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261990_0x261990");
#endif

    switch (ctx->pc) {
        case 0x261990u: goto label_261990;
        case 0x261994u: goto label_261994;
        case 0x261998u: goto label_261998;
        case 0x26199cu: goto label_26199c;
        case 0x2619a0u: goto label_2619a0;
        case 0x2619a4u: goto label_2619a4;
        case 0x2619a8u: goto label_2619a8;
        case 0x2619acu: goto label_2619ac;
        case 0x2619b0u: goto label_2619b0;
        case 0x2619b4u: goto label_2619b4;
        case 0x2619b8u: goto label_2619b8;
        case 0x2619bcu: goto label_2619bc;
        case 0x2619c0u: goto label_2619c0;
        case 0x2619c4u: goto label_2619c4;
        case 0x2619c8u: goto label_2619c8;
        case 0x2619ccu: goto label_2619cc;
        case 0x2619d0u: goto label_2619d0;
        case 0x2619d4u: goto label_2619d4;
        case 0x2619d8u: goto label_2619d8;
        case 0x2619dcu: goto label_2619dc;
        case 0x2619e0u: goto label_2619e0;
        case 0x2619e4u: goto label_2619e4;
        case 0x2619e8u: goto label_2619e8;
        case 0x2619ecu: goto label_2619ec;
        case 0x2619f0u: goto label_2619f0;
        case 0x2619f4u: goto label_2619f4;
        case 0x2619f8u: goto label_2619f8;
        case 0x2619fcu: goto label_2619fc;
        default: break;
    }

    ctx->pc = 0x261990u;

label_261990:
    // 0x261990: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x261990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_261994:
    // 0x261994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x261994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_261998:
    // 0x261998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x261998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26199c:
    // 0x26199c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x26199cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2619a0:
    // 0x2619a0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2619a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2619a4:
    // 0x2619a4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2619a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_2619a8:
    // 0x2619a8: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x2619a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_2619ac:
    // 0x2619ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2619acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2619b0:
    // 0x2619b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2619b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2619b4:
    // 0x2619b4: 0xc098680  jal         func_261A00
label_2619b8:
    if (ctx->pc == 0x2619B8u) {
        ctx->pc = 0x2619BCu;
        goto label_2619bc;
    }
    ctx->pc = 0x2619B4u;
    SET_GPR_U32(ctx, 31, 0x2619BCu);
    ctx->pc = 0x261A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261A00u, 0x2619B4u, 0x2619BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2619BCu;
label_2619bc:
    // 0x2619bc: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x2619bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
label_2619c0:
    // 0x2619c0: 0x261017b0  addiu       $s0, $s0, 0x17B0
    ctx->pc = 0x2619c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6064));
label_2619c4:
    // 0x2619c4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x2619c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2619c8:
    // 0x2619c8: 0x200f809  jalr        $s0
label_2619cc:
    if (ctx->pc == 0x2619CCu) {
        ctx->pc = 0x2619D0u;
        goto label_2619d0;
    }
    ctx->pc = 0x2619C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2619D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2619C8u, 0x2619D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2619D0u;
label_2619d0:
    // 0x2619d0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2619d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2619d4:
    // 0x2619d4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2619d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2619d8:
    // 0x2619d8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2619d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2619dc:
    // 0x2619dc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2619dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2619e0:
    // 0x2619e0: 0xc097fc0  jal         func_25FF00
label_2619e4:
    if (ctx->pc == 0x2619E4u) {
        ctx->pc = 0x2619E8u;
        goto label_2619e8;
    }
    ctx->pc = 0x2619E0u;
    SET_GPR_U32(ctx, 31, 0x2619E8u);
    ctx->pc = 0x25FF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF00u, 0x2619E0u, 0x2619E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2619E8u;
label_2619e8:
    // 0x2619e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2619e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2619ec:
    // 0x2619ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2619ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2619f0:
    // 0x2619f0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2619f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2619f4:
    // 0x2619f4: 0x3e00008  jr          $ra
label_2619f8:
    if (ctx->pc == 0x2619F8u) {
        ctx->pc = 0x2619FCu;
        goto label_2619fc;
    }
    ctx->pc = 0x2619F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2619F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2619FCu;
label_2619fc:
    // 0x2619fc: 0x0  nop
    ctx->pc = 0x2619fcu;
    // NOP
    ctx->pc = 0x261a00u;
}
