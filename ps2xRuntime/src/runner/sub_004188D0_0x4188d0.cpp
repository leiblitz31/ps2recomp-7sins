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

// Function: sub_004188D0
// Address: 0x4188d0 - 0x418940
void sub_004188D0_0x4188d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004188D0_0x4188d0");
#endif

    switch (ctx->pc) {
        case 0x4188d0u: goto label_4188d0;
        case 0x4188d4u: goto label_4188d4;
        case 0x4188d8u: goto label_4188d8;
        case 0x4188dcu: goto label_4188dc;
        case 0x4188e0u: goto label_4188e0;
        case 0x4188e4u: goto label_4188e4;
        case 0x4188e8u: goto label_4188e8;
        case 0x4188ecu: goto label_4188ec;
        case 0x4188f0u: goto label_4188f0;
        case 0x4188f4u: goto label_4188f4;
        case 0x4188f8u: goto label_4188f8;
        case 0x4188fcu: goto label_4188fc;
        case 0x418900u: goto label_418900;
        case 0x418904u: goto label_418904;
        case 0x418908u: goto label_418908;
        case 0x41890cu: goto label_41890c;
        case 0x418910u: goto label_418910;
        case 0x418914u: goto label_418914;
        case 0x418918u: goto label_418918;
        case 0x41891cu: goto label_41891c;
        case 0x418920u: goto label_418920;
        case 0x418924u: goto label_418924;
        case 0x418928u: goto label_418928;
        case 0x41892cu: goto label_41892c;
        case 0x418930u: goto label_418930;
        case 0x418934u: goto label_418934;
        case 0x418938u: goto label_418938;
        case 0x41893cu: goto label_41893c;
        default: break;
    }

    ctx->pc = 0x4188d0u;

label_4188d0:
    // 0x4188d0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4188d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4188d4:
    // 0x4188d4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4188d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4188d8:
    // 0x4188d8: 0x8c62e894  lw          $v0, -0x176C($v1)
    ctx->pc = 0x4188d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961300)));
label_4188dc:
    // 0x4188dc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x4188dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4188e0:
    // 0x4188e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4188e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4188e4:
    // 0x4188e4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4188e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4188e8:
    // 0x4188e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4188e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4188ec:
    // 0x4188ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4188ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4188f0:
    // 0x4188f0: 0x40f809  jalr        $v0
label_4188f4:
    if (ctx->pc == 0x4188F4u) {
        ctx->pc = 0x4188F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4188F0u;
        // 0x4188f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4188F8u;
        goto label_4188f8;
    }
    ctx->pc = 0x4188F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4188F8u);
        ctx->pc = 0x4188F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4188F0u;
        // 0x4188f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4188F0u, 0x4188F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4188F8u;
label_4188f8:
    // 0x4188f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4188f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4188fc:
    // 0x4188fc: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
label_418900:
    if (ctx->pc == 0x418900u) {
        ctx->pc = 0x418900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4188FCu;
        // 0x418900: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418904u;
        goto label_418904;
    }
    ctx->pc = 0x4188FCu;
    {
        const bool branch_taken_0x4188fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4188fc) {
            ctx->pc = 0x418900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4188FCu;
            // 0x418900: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418930u;
            goto label_418930;
        }
    }
    ctx->pc = 0x418904u;
label_418904:
    // 0x418904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x418904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_418908:
    // 0x418908: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x418908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_41890c:
    // 0x41890c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41890cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_418910:
    // 0x418910: 0xc1035f6  jal         func_40D7D8
label_418914:
    if (ctx->pc == 0x418914u) {
        ctx->pc = 0x418914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418910u;
        // 0x418914: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418918u;
        goto label_418918;
    }
    ctx->pc = 0x418910u;
    SET_GPR_U32(ctx, 31, 0x418918u);
    ctx->pc = 0x418914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418910u;
    // 0x418914: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x418910u, 0x418918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418918u;
label_418918:
    // 0x418918: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x418918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41891c:
    // 0x41891c: 0xc103628  jal         func_40D8A0
label_418920:
    if (ctx->pc == 0x418920u) {
        ctx->pc = 0x418920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41891Cu;
        // 0x418920: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418924u;
        goto label_418924;
    }
    ctx->pc = 0x41891Cu;
    SET_GPR_U32(ctx, 31, 0x418924u);
    ctx->pc = 0x418920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41891Cu;
    // 0x418920: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41891Cu, 0x418924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418924u;
label_418924:
    // 0x418924: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_418928:
    if (ctx->pc == 0x418928u) {
        ctx->pc = 0x418928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418924u;
        // 0x418928: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41892Cu;
        goto label_41892c;
    }
    ctx->pc = 0x418924u;
    {
        const bool branch_taken_0x418924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x418928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418924u;
        // 0x418928: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418924) {
            ctx->pc = 0x418930u;
            goto label_418930;
        }
    }
    ctx->pc = 0x41892Cu;
label_41892c:
    // 0x41892c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x41892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_418930:
    // 0x418930: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x418930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_418934:
    // 0x418934: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x418934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_418938:
    // 0x418938: 0x3e00008  jr          $ra
label_41893c:
    if (ctx->pc == 0x41893Cu) {
        ctx->pc = 0x41893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418938u;
        // 0x41893c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418940u;
        goto label_fallthrough_0x418938;
    }
    ctx->pc = 0x418938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418938u;
        // 0x41893c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x418938:
    ctx->pc = 0x418940u;
}
