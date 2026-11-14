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

// Function: sub_002B0950
// Address: 0x2b0950 - 0x2b09f0
void sub_002B0950_0x2b0950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0950_0x2b0950");
#endif

    switch (ctx->pc) {
        case 0x2b0950u: goto label_2b0950;
        case 0x2b0954u: goto label_2b0954;
        case 0x2b0958u: goto label_2b0958;
        case 0x2b095cu: goto label_2b095c;
        case 0x2b0960u: goto label_2b0960;
        case 0x2b0964u: goto label_2b0964;
        case 0x2b0968u: goto label_2b0968;
        case 0x2b096cu: goto label_2b096c;
        case 0x2b0970u: goto label_2b0970;
        case 0x2b0974u: goto label_2b0974;
        case 0x2b0978u: goto label_2b0978;
        case 0x2b097cu: goto label_2b097c;
        case 0x2b0980u: goto label_2b0980;
        case 0x2b0984u: goto label_2b0984;
        case 0x2b0988u: goto label_2b0988;
        case 0x2b098cu: goto label_2b098c;
        case 0x2b0990u: goto label_2b0990;
        case 0x2b0994u: goto label_2b0994;
        case 0x2b0998u: goto label_2b0998;
        case 0x2b099cu: goto label_2b099c;
        case 0x2b09a0u: goto label_2b09a0;
        case 0x2b09a4u: goto label_2b09a4;
        case 0x2b09a8u: goto label_2b09a8;
        case 0x2b09acu: goto label_2b09ac;
        case 0x2b09b0u: goto label_2b09b0;
        case 0x2b09b4u: goto label_2b09b4;
        case 0x2b09b8u: goto label_2b09b8;
        case 0x2b09bcu: goto label_2b09bc;
        case 0x2b09c0u: goto label_2b09c0;
        case 0x2b09c4u: goto label_2b09c4;
        case 0x2b09c8u: goto label_2b09c8;
        case 0x2b09ccu: goto label_2b09cc;
        case 0x2b09d0u: goto label_2b09d0;
        case 0x2b09d4u: goto label_2b09d4;
        case 0x2b09d8u: goto label_2b09d8;
        case 0x2b09dcu: goto label_2b09dc;
        case 0x2b09e0u: goto label_2b09e0;
        case 0x2b09e4u: goto label_2b09e4;
        case 0x2b09e8u: goto label_2b09e8;
        case 0x2b09ecu: goto label_2b09ec;
        default: break;
    }

    ctx->pc = 0x2b0950u;

label_2b0950:
    // 0x2b0950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b0950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2b0954:
    // 0x2b0954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b0954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b0958:
    // 0x2b0958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b0958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b095c:
    // 0x2b095c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b095cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b0960:
    // 0x2b0960: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2b0960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2b0964:
    // 0x2b0964: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b0964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2b0968:
    // 0x2b0968: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b096c:
    if (ctx->pc == 0x2B096Cu) {
        ctx->pc = 0x2B0970u;
        goto label_2b0970;
    }
    ctx->pc = 0x2B0968u;
    {
        const bool branch_taken_0x2b0968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0968) {
            ctx->pc = 0x2B0978u;
            goto label_2b0978;
        }
    }
    ctx->pc = 0x2B0970u;
label_2b0970:
    // 0x2b0970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0974:
    // 0x2b0974: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2b0974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2b0978:
    // 0x2b0978: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b0978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2b097c:
    // 0x2b097c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2b097cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2b0980:
    // 0x2b0980: 0xc119b68  jal         func_466DA0
label_2b0984:
    if (ctx->pc == 0x2B0984u) {
        ctx->pc = 0x2B0988u;
        goto label_2b0988;
    }
    ctx->pc = 0x2B0980u;
    SET_GPR_U32(ctx, 31, 0x2B0988u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2B0980u, 0x2B0988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0988u;
label_2b0988:
    // 0x2b0988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b0988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b098c:
    // 0x2b098c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2b0990:
    if (ctx->pc == 0x2B0990u) {
        ctx->pc = 0x2B0994u;
        goto label_2b0994;
    }
    ctx->pc = 0x2B098Cu;
    {
        const bool branch_taken_0x2b098c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b098c) {
            ctx->pc = 0x2B09A0u;
            goto label_2b09a0;
        }
    }
    ctx->pc = 0x2B0994u;
label_2b0994:
    // 0x2b0994: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b0994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b0998:
    // 0x2b0998: 0x1000000e  b           . + 4 + (0xE << 2)
label_2b099c:
    if (ctx->pc == 0x2B099Cu) {
        ctx->pc = 0x2B09A0u;
        goto label_2b09a0;
    }
    ctx->pc = 0x2B0998u;
    {
        const bool branch_taken_0x2b0998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0998) {
            ctx->pc = 0x2B09D4u;
            goto label_2b09d4;
        }
    }
    ctx->pc = 0x2B09A0u;
label_2b09a0:
    // 0x2b09a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b09a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b09a4:
    // 0x2b09a4: 0xc0ba088  jal         func_2E8220
label_2b09a8:
    if (ctx->pc == 0x2B09A8u) {
        ctx->pc = 0x2B09ACu;
        goto label_2b09ac;
    }
    ctx->pc = 0x2B09A4u;
    SET_GPR_U32(ctx, 31, 0x2B09ACu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2B09A4u, 0x2B09ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B09ACu;
label_2b09ac:
    // 0x2b09ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b09acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b09b0:
    // 0x2b09b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b09b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b09b4:
    // 0x2b09b4: 0xc0ba088  jal         func_2E8220
label_2b09b8:
    if (ctx->pc == 0x2B09B8u) {
        ctx->pc = 0x2B09BCu;
        goto label_2b09bc;
    }
    ctx->pc = 0x2B09B4u;
    SET_GPR_U32(ctx, 31, 0x2B09BCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2B09B4u, 0x2B09BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B09BCu;
label_2b09bc:
    // 0x2b09bc: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2b09c0:
    if (ctx->pc == 0x2B09C0u) {
        ctx->pc = 0x2B09C4u;
        goto label_2b09c4;
    }
    ctx->pc = 0x2B09BCu;
    {
        const bool branch_taken_0x2b09bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b09bc) {
            ctx->pc = 0x2B0978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0978;
        }
    }
    ctx->pc = 0x2B09C4u;
label_2b09c4:
    // 0x2b09c4: 0x200f809  jalr        $s0
label_2b09c8:
    if (ctx->pc == 0x2B09C8u) {
        ctx->pc = 0x2B09CCu;
        goto label_2b09cc;
    }
    ctx->pc = 0x2B09C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2B09CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B09C4u, 0x2B09CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B09CCu;
label_2b09cc:
    // 0x2b09cc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2b09d0:
    if (ctx->pc == 0x2B09D0u) {
        ctx->pc = 0x2B09D4u;
        goto label_2b09d4;
    }
    ctx->pc = 0x2B09CCu;
    {
        const bool branch_taken_0x2b09cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b09cc) {
            ctx->pc = 0x2B0978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0978;
        }
    }
    ctx->pc = 0x2B09D4u;
label_2b09d4:
    // 0x2b09d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b09d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b09d8:
    // 0x2b09d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b09d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b09dc:
    // 0x2b09dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b09dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b09e0:
    // 0x2b09e0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2b09e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2b09e4:
    // 0x2b09e4: 0x3e00008  jr          $ra
label_2b09e8:
    if (ctx->pc == 0x2B09E8u) {
        ctx->pc = 0x2B09ECu;
        goto label_2b09ec;
    }
    ctx->pc = 0x2B09E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B09E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B09ECu;
label_2b09ec:
    // 0x2b09ec: 0x0  nop
    ctx->pc = 0x2b09ecu;
    // NOP
    ctx->pc = 0x2b09f0u;
}
