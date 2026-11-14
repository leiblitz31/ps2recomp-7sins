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

// Function: sub_0049A8F8
// Address: 0x49a8f8 - 0x49a958
void sub_0049A8F8_0x49a8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A8F8_0x49a8f8");
#endif

    switch (ctx->pc) {
        case 0x49a91cu: goto label_49a91c;
        case 0x49a93cu: goto label_49a93c;
        case 0x49a94cu: goto label_49a94c;
        default: break;
    }

    ctx->pc = 0x49a8f8u;

    // 0x49a8f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49a8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49a8fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49a8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49a900: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x49a900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x49a904: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x49a904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x49a908: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x49A908u;
    {
        const bool branch_taken_0x49a908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A908u;
        // 0x49a90c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a908) {
            ctx->pc = 0x49A924u;
            goto label_49a924;
        }
    }
    ctx->pc = 0x49A910u;
    // 0x49a910: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x49a910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x49a914: 0xc12a936  jal         func_4AA4D8
    ctx->pc = 0x49A914u;
    SET_GPR_U32(ctx, 31, 0x49A91Cu);
    ctx->pc = 0x49A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A914u;
    // 0x49a918: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA4D8u, 0x49A914u, 0x49A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A91Cu;
label_49a91c:
    // 0x49a91c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x49A91Cu;
    {
        const bool branch_taken_0x49a91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A91Cu;
        // 0x49a920: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a91c) {
            ctx->pc = 0x49A950u;
            goto label_49a950;
        }
    }
    ctx->pc = 0x49A924u;
label_49a924:
    // 0x49a924: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x49a924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x49a928: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x49A928u;
    {
        const bool branch_taken_0x49a928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49a928) {
            ctx->pc = 0x49A92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49A928u;
            // 0x49a92c: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49A944u;
            goto label_49a944;
        }
    }
    ctx->pc = 0x49A930u;
    // 0x49a930: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x49a930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x49a934: 0xc127ca4  jal         func_49F290
    ctx->pc = 0x49A934u;
    SET_GPR_U32(ctx, 31, 0x49A93Cu);
    ctx->pc = 0x49A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A934u;
    // 0x49a938: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x49A934u, 0x49A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A93Cu;
label_49a93c:
    // 0x49a93c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49A93Cu;
    {
        const bool branch_taken_0x49a93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A93Cu;
        // 0x49a940: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a93c) {
            ctx->pc = 0x49A950u;
            goto label_49a950;
        }
    }
    ctx->pc = 0x49A944u;
label_49a944:
    // 0x49a944: 0xc12ad70  jal         func_4AB5C0
    ctx->pc = 0x49A944u;
    SET_GPR_U32(ctx, 31, 0x49A94Cu);
    ctx->pc = 0x49A948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A944u;
    // 0x49a948: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB5C0u, 0x49A944u, 0x49A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A94Cu;
label_49a94c:
    // 0x49a94c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49a950:
    // 0x49a950: 0x3e00008  jr          $ra
    ctx->pc = 0x49A950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A950u;
        // 0x49a954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A958u;
}
