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

// Function: sub_002680B0
// Address: 0x2680b0 - 0x268180
void sub_002680B0_0x2680b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002680B0_0x2680b0");
#endif

    switch (ctx->pc) {
        case 0x2680e4u: goto label_2680e4;
        case 0x2680fcu: goto label_2680fc;
        case 0x26810cu: goto label_26810c;
        case 0x268118u: goto label_268118;
        case 0x26812cu: goto label_26812c;
        case 0x268150u: goto label_268150;
        default: break;
    }

    ctx->pc = 0x2680b0u;

    // 0x2680b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2680b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2680b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2680b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2680b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2680b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2680bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2680bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2680c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2680c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2680c4: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x2680c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x2680c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2680c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2680cc: 0x93a20040  lbu         $v0, 0x40($sp)
    ctx->pc = 0x2680ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2680d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2680D0u;
    {
        const bool branch_taken_0x2680d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2680d0) {
            ctx->pc = 0x2680F0u;
            goto label_2680f0;
        }
    }
    ctx->pc = 0x2680D8u;
    // 0x2680d8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2680d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2680dc: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x2680DCu;
    SET_GPR_U32(ctx, 31, 0x2680E4u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x2680DCu, 0x2680E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2680E4u;
label_2680e4:
    // 0x2680e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2680e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2680e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2680E8u;
    {
        const bool branch_taken_0x2680e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2680e8) {
            ctx->pc = 0x268100u;
            goto label_268100;
        }
    }
    ctx->pc = 0x2680F0u;
label_2680f0:
    // 0x2680f0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2680f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2680f4: 0xc041a68  jal         func_1069A0
    ctx->pc = 0x2680F4u;
    SET_GPR_U32(ctx, 31, 0x2680FCu);
    ctx->pc = 0x1069A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069A0u, 0x2680F4u, 0x2680FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2680FCu;
label_2680fc:
    // 0x2680fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2680fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268100:
    // 0x268100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268104: 0xc041a60  jal         func_106980
    ctx->pc = 0x268104u;
    SET_GPR_U32(ctx, 31, 0x26810Cu);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x268104u, 0x26810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26810Cu;
label_26810c:
    // 0x26810c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26810cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268110: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x268110u;
    {
        const bool branch_taken_0x268110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268110) {
            ctx->pc = 0x268144u;
            goto label_268144;
        }
    }
    ctx->pc = 0x268118u;
label_268118:
    // 0x268118: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x268118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26811c: 0x24050483  addiu       $a1, $zero, 0x483
    ctx->pc = 0x26811cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
    // 0x268120: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268124: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x268124u;
    SET_GPR_U32(ctx, 31, 0x26812Cu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x268124u, 0x26812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26812Cu;
label_26812c:
    // 0x26812c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26812Cu;
    {
        const bool branch_taken_0x26812c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26812c) {
            ctx->pc = 0x268140u;
            goto label_268140;
        }
    }
    ctx->pc = 0x268134u;
    // 0x268134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268138: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x268138u;
    {
        const bool branch_taken_0x268138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268138) {
            ctx->pc = 0x26815Cu;
            goto label_26815c;
        }
    }
    ctx->pc = 0x268140u;
label_268140:
    // 0x268140: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x268140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_268144:
    // 0x268144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268148: 0xc041a14  jal         func_106850
    ctx->pc = 0x268148u;
    SET_GPR_U32(ctx, 31, 0x268150u);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x268148u, 0x268150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268150u;
label_268150:
    // 0x268150: 0x1602fff1  bne         $s0, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x268150u;
    {
        const bool branch_taken_0x268150 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x268150) {
            ctx->pc = 0x268118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268118;
        }
    }
    ctx->pc = 0x268158u;
    // 0x268158: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x268158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26815c:
    // 0x26815c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26815cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x268160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268168: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x268168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26816c: 0x3e00008  jr          $ra
    ctx->pc = 0x26816Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26816Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268174u;
    // 0x268174: 0x0  nop
    ctx->pc = 0x268174u;
    // NOP
    // 0x268178: 0x0  nop
    ctx->pc = 0x268178u;
    // NOP
    // 0x26817c: 0x0  nop
    ctx->pc = 0x26817cu;
    // NOP
    ctx->pc = 0x268180u;
}
