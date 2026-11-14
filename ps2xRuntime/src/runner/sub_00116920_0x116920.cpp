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

// Function: sub_00116920
// Address: 0x116920 - 0x1169c0
void sub_00116920_0x116920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116920_0x116920");
#endif

    switch (ctx->pc) {
        case 0x116920u: goto label_116920;
        case 0x116924u: goto label_116924;
        case 0x116928u: goto label_116928;
        case 0x11692cu: goto label_11692c;
        case 0x116930u: goto label_116930;
        case 0x116934u: goto label_116934;
        case 0x116938u: goto label_116938;
        case 0x11693cu: goto label_11693c;
        case 0x116940u: goto label_116940;
        case 0x116944u: goto label_116944;
        case 0x116948u: goto label_116948;
        case 0x11694cu: goto label_11694c;
        case 0x116950u: goto label_116950;
        case 0x116954u: goto label_116954;
        case 0x116958u: goto label_116958;
        case 0x11695cu: goto label_11695c;
        case 0x116960u: goto label_116960;
        case 0x116964u: goto label_116964;
        case 0x116968u: goto label_116968;
        case 0x11696cu: goto label_11696c;
        case 0x116970u: goto label_116970;
        case 0x116974u: goto label_116974;
        case 0x116978u: goto label_116978;
        case 0x11697cu: goto label_11697c;
        case 0x116980u: goto label_116980;
        case 0x116984u: goto label_116984;
        case 0x116988u: goto label_116988;
        case 0x11698cu: goto label_11698c;
        case 0x116990u: goto label_116990;
        case 0x116994u: goto label_116994;
        case 0x116998u: goto label_116998;
        case 0x11699cu: goto label_11699c;
        case 0x1169a0u: goto label_1169a0;
        case 0x1169a4u: goto label_1169a4;
        case 0x1169a8u: goto label_1169a8;
        case 0x1169acu: goto label_1169ac;
        case 0x1169b0u: goto label_1169b0;
        case 0x1169b4u: goto label_1169b4;
        case 0x1169b8u: goto label_1169b8;
        case 0x1169bcu: goto label_1169bc;
        default: break;
    }

    ctx->pc = 0x116920u;

label_116920:
    // 0x116920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x116920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_116924:
    // 0x116924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x116924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_116928:
    // 0x116928: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x116928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11692c:
    // 0x11692c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11692cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_116930:
    // 0x116930: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x116930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_116934:
    // 0x116934: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x116934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_116938:
    // 0x116938: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x116938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_11693c:
    // 0x11693c: 0x320f809  jalr        $t9
label_116940:
    if (ctx->pc == 0x116940u) {
        ctx->pc = 0x116944u;
        goto label_116944;
    }
    ctx->pc = 0x11693Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x116944u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11693Cu, 0x116944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116944u;
label_116944:
    // 0x116944: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x116944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_116948:
    // 0x116948: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_11694c:
    if (ctx->pc == 0x11694Cu) {
        ctx->pc = 0x116950u;
        goto label_116950;
    }
    ctx->pc = 0x116948u;
    {
        const bool branch_taken_0x116948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x116948) {
            ctx->pc = 0x116968u;
            goto label_116968;
        }
    }
    ctx->pc = 0x116950u;
label_116950:
    // 0x116950: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x116950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_116954:
    // 0x116954: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x116954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_116958:
    // 0x116958: 0xc045f0c  jal         func_117C30
label_11695c:
    if (ctx->pc == 0x11695Cu) {
        ctx->pc = 0x116960u;
        goto label_116960;
    }
    ctx->pc = 0x116958u;
    SET_GPR_U32(ctx, 31, 0x116960u);
    ctx->pc = 0x117C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C30u, 0x116958u, 0x116960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116960u;
label_116960:
    // 0x116960: 0x10000011  b           . + 4 + (0x11 << 2)
label_116964:
    if (ctx->pc == 0x116964u) {
        ctx->pc = 0x116968u;
        goto label_116968;
    }
    ctx->pc = 0x116960u;
    {
        const bool branch_taken_0x116960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116960) {
            ctx->pc = 0x1169A8u;
            goto label_1169a8;
        }
    }
    ctx->pc = 0x116968u;
label_116968:
    // 0x116968: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x116968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11696c:
    // 0x11696c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11696cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_116970:
    // 0x116970: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x116970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_116974:
    // 0x116974: 0x320f809  jalr        $t9
label_116978:
    if (ctx->pc == 0x116978u) {
        ctx->pc = 0x11697Cu;
        goto label_11697c;
    }
    ctx->pc = 0x116974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11697Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116974u, 0x11697Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11697Cu;
label_11697c:
    // 0x11697c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11697cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_116980:
    // 0x116980: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_116984:
    if (ctx->pc == 0x116984u) {
        ctx->pc = 0x116988u;
        goto label_116988;
    }
    ctx->pc = 0x116980u;
    {
        const bool branch_taken_0x116980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x116980) {
            ctx->pc = 0x1169A4u;
            goto label_1169a4;
        }
    }
    ctx->pc = 0x116988u;
label_116988:
    // 0x116988: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x116988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_11698c:
    // 0x11698c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11698cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_116990:
    // 0x116990: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x116990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_116994:
    // 0x116994: 0xc045f44  jal         func_117D10
label_116998:
    if (ctx->pc == 0x116998u) {
        ctx->pc = 0x11699Cu;
        goto label_11699c;
    }
    ctx->pc = 0x116994u;
    SET_GPR_U32(ctx, 31, 0x11699Cu);
    ctx->pc = 0x117D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117D10u, 0x116994u, 0x11699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11699Cu;
label_11699c:
    // 0x11699c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1169a0:
    if (ctx->pc == 0x1169A0u) {
        ctx->pc = 0x1169A4u;
        goto label_1169a4;
    }
    ctx->pc = 0x11699Cu;
    {
        const bool branch_taken_0x11699c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11699c) {
            ctx->pc = 0x1169A8u;
            goto label_1169a8;
        }
    }
    ctx->pc = 0x1169A4u;
label_1169a4:
    // 0x1169a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1169a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1169a8:
    // 0x1169a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1169a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1169ac:
    // 0x1169ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1169acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1169b0:
    // 0x1169b0: 0x3e00008  jr          $ra
label_1169b4:
    if (ctx->pc == 0x1169B4u) {
        ctx->pc = 0x1169B8u;
        goto label_1169b8;
    }
    ctx->pc = 0x1169B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1169B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1169B8u;
label_1169b8:
    // 0x1169b8: 0x0  nop
    ctx->pc = 0x1169b8u;
    // NOP
label_1169bc:
    // 0x1169bc: 0x0  nop
    ctx->pc = 0x1169bcu;
    // NOP
    ctx->pc = 0x1169c0u;
}
