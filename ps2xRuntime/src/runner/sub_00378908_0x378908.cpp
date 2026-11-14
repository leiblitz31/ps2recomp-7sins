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

// Function: sub_00378908
// Address: 0x378908 - 0x378968
void sub_00378908_0x378908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378908_0x378908");
#endif

    switch (ctx->pc) {
        case 0x378908u: goto label_378908;
        case 0x37890cu: goto label_37890c;
        case 0x378910u: goto label_378910;
        case 0x378914u: goto label_378914;
        case 0x378918u: goto label_378918;
        case 0x37891cu: goto label_37891c;
        case 0x378920u: goto label_378920;
        case 0x378924u: goto label_378924;
        case 0x378928u: goto label_378928;
        case 0x37892cu: goto label_37892c;
        case 0x378930u: goto label_378930;
        case 0x378934u: goto label_378934;
        case 0x378938u: goto label_378938;
        case 0x37893cu: goto label_37893c;
        case 0x378940u: goto label_378940;
        case 0x378944u: goto label_378944;
        case 0x378948u: goto label_378948;
        case 0x37894cu: goto label_37894c;
        case 0x378950u: goto label_378950;
        case 0x378954u: goto label_378954;
        case 0x378958u: goto label_378958;
        case 0x37895cu: goto label_37895c;
        case 0x378960u: goto label_378960;
        case 0x378964u: goto label_378964;
        default: break;
    }

    ctx->pc = 0x378908u;

label_378908:
    // 0x378908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x378908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37890c:
    // 0x37890c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37890cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_378910:
    // 0x378910: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x378910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_378914:
    // 0x378914: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x378914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_378918:
    // 0x378918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37891c:
    // 0x37891c: 0x2630002c  addiu       $s0, $s1, 0x2C
    ctx->pc = 0x37891cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_378920:
    // 0x378920: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x378920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_378924:
    // 0x378924: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_378928:
    if (ctx->pc == 0x378928u) {
        ctx->pc = 0x378928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378924u;
        // 0x378928: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37892Cu;
        goto label_37892c;
    }
    ctx->pc = 0x378924u;
    {
        const bool branch_taken_0x378924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x378928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378924u;
        // 0x378928: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378924) {
            ctx->pc = 0x378938u;
            goto label_378938;
        }
    }
    ctx->pc = 0x37892Cu;
label_37892c:
    // 0x37892c: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x37892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_378930:
    // 0x378930: 0x40f809  jalr        $v0
label_378934:
    if (ctx->pc == 0x378934u) {
        ctx->pc = 0x378938u;
        goto label_378938;
    }
    ctx->pc = 0x378930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x378938u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378930u, 0x378938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x378938u;
label_378938:
    // 0x378938: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x378938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_37893c:
    // 0x37893c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378940:
    // 0x378940: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x378940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_378944:
    // 0x378944: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x378944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_378948:
    // 0x378948: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x378948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_37894c:
    // 0x37894c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x37894cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_378950:
    // 0x378950: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x378950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_378954:
    // 0x378954: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x378954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_378958:
    // 0x378958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x378958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37895c:
    // 0x37895c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37895cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_378960:
    // 0x378960: 0x3e00008  jr          $ra
label_378964:
    if (ctx->pc == 0x378964u) {
        ctx->pc = 0x378964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378960u;
        // 0x378964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378968u;
        goto label_fallthrough_0x378960;
    }
    ctx->pc = 0x378960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378960u;
        // 0x378964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x378960:
    ctx->pc = 0x378968u;
}
