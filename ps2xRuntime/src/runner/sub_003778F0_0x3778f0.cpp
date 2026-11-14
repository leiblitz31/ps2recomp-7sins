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

// Function: sub_003778F0
// Address: 0x3778f0 - 0x377950
void sub_003778F0_0x3778f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003778F0_0x3778f0");
#endif

    switch (ctx->pc) {
        case 0x3778f0u: goto label_3778f0;
        case 0x3778f4u: goto label_3778f4;
        case 0x3778f8u: goto label_3778f8;
        case 0x3778fcu: goto label_3778fc;
        case 0x377900u: goto label_377900;
        case 0x377904u: goto label_377904;
        case 0x377908u: goto label_377908;
        case 0x37790cu: goto label_37790c;
        case 0x377910u: goto label_377910;
        case 0x377914u: goto label_377914;
        case 0x377918u: goto label_377918;
        case 0x37791cu: goto label_37791c;
        case 0x377920u: goto label_377920;
        case 0x377924u: goto label_377924;
        case 0x377928u: goto label_377928;
        case 0x37792cu: goto label_37792c;
        case 0x377930u: goto label_377930;
        case 0x377934u: goto label_377934;
        case 0x377938u: goto label_377938;
        case 0x37793cu: goto label_37793c;
        case 0x377940u: goto label_377940;
        case 0x377944u: goto label_377944;
        case 0x377948u: goto label_377948;
        case 0x37794cu: goto label_37794c;
        default: break;
    }

    ctx->pc = 0x3778f0u;

label_3778f0:
    // 0x3778f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3778f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3778f4:
    // 0x3778f4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3778f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3778f8:
    // 0x3778f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3778f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3778fc:
    // 0x3778fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3778fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_377900:
    // 0x377900: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_377904:
    // 0x377904: 0x8c70c438  lw          $s0, -0x3BC8($v1)
    ctx->pc = 0x377904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951992)));
label_377908:
    // 0x377908: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x377908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37790c:
    // 0x37790c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37790cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_377910:
    // 0x377910: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x377910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_377914:
    // 0x377914: 0x8c45e98c  lw          $a1, -0x1674($v0)
    ctx->pc = 0x377914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961548)));
label_377918:
    // 0x377918: 0xa0f809  jalr        $a1
label_37791c:
    if (ctx->pc == 0x37791Cu) {
        ctx->pc = 0x37791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377918u;
        // 0x37791c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377920u;
        goto label_377920;
    }
    ctx->pc = 0x377918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x377920u);
        ctx->pc = 0x37791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377918u;
        // 0x37791c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377918u, 0x377920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x377920u;
label_377920:
    // 0x377920: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x377920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_377924:
    // 0x377924: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x377924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_377928:
    // 0x377928: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x377928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_37792c:
    // 0x37792c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x37792cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_377930:
    // 0x377930: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x377930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_377934:
    // 0x377934: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x377934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_377938:
    // 0x377938: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x377938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37793c:
    // 0x37793c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37793cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_377940:
    // 0x377940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_377944:
    // 0x377944: 0x3e00008  jr          $ra
label_377948:
    if (ctx->pc == 0x377948u) {
        ctx->pc = 0x377948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377944u;
        // 0x377948: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37794Cu;
        goto label_37794c;
    }
    ctx->pc = 0x377944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377944u;
        // 0x377948: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37794Cu;
label_37794c:
    // 0x37794c: 0x0  nop
    ctx->pc = 0x37794cu;
    // NOP
    ctx->pc = 0x377950u;
}
