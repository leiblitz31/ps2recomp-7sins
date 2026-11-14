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

// Function: sub_004A10B0
// Address: 0x4a10b0 - 0x4a1110
void sub_004A10B0_0x4a10b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A10B0_0x4a10b0");
#endif

    switch (ctx->pc) {
        case 0x4a10b0u: goto label_4a10b0;
        case 0x4a10b4u: goto label_4a10b4;
        case 0x4a10b8u: goto label_4a10b8;
        case 0x4a10bcu: goto label_4a10bc;
        case 0x4a10c0u: goto label_4a10c0;
        case 0x4a10c4u: goto label_4a10c4;
        case 0x4a10c8u: goto label_4a10c8;
        case 0x4a10ccu: goto label_4a10cc;
        case 0x4a10d0u: goto label_4a10d0;
        case 0x4a10d4u: goto label_4a10d4;
        case 0x4a10d8u: goto label_4a10d8;
        case 0x4a10dcu: goto label_4a10dc;
        case 0x4a10e0u: goto label_4a10e0;
        case 0x4a10e4u: goto label_4a10e4;
        case 0x4a10e8u: goto label_4a10e8;
        case 0x4a10ecu: goto label_4a10ec;
        case 0x4a10f0u: goto label_4a10f0;
        case 0x4a10f4u: goto label_4a10f4;
        case 0x4a10f8u: goto label_4a10f8;
        case 0x4a10fcu: goto label_4a10fc;
        case 0x4a1100u: goto label_4a1100;
        case 0x4a1104u: goto label_4a1104;
        case 0x4a1108u: goto label_4a1108;
        case 0x4a110cu: goto label_4a110c;
        default: break;
    }

    ctx->pc = 0x4a10b0u;

label_4a10b0:
    // 0x4a10b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a10b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a10b4:
    // 0x4a10b4: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x4a10b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_4a10b8:
    // 0x4a10b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a10b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a10bc:
    // 0x4a10bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a10bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a10c0:
    // 0x4a10c0: 0x24100024  addiu       $s0, $zero, 0x24
    ctx->pc = 0x4a10c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4a10c4:
    // 0x4a10c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a10c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a10c8:
    // 0x4a10c8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x4a10c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4a10cc:
    // 0x4a10cc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4a10d0:
    if (ctx->pc == 0x4A10D0u) {
        ctx->pc = 0x4A10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A10CCu;
        // 0x4a10d0: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A10D4u;
        goto label_4a10d4;
    }
    ctx->pc = 0x4A10CCu;
    {
        const bool branch_taken_0x4a10cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A10CCu;
        // 0x4a10d0: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a10cc) {
            ctx->pc = 0x4A10F8u;
            goto label_4a10f8;
        }
    }
    ctx->pc = 0x4A10D4u;
label_4a10d4:
    // 0x4a10d4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4a10d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4a10d8:
    // 0x4a10d8: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x4a10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_4a10dc:
    // 0x4a10dc: 0x40f809  jalr        $v0
label_4a10e0:
    if (ctx->pc == 0x4A10E0u) {
        ctx->pc = 0x4A10E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A10DCu;
        // 0x4a10e0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A10E4u;
        goto label_4a10e4;
    }
    ctx->pc = 0x4A10DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A10E4u);
        ctx->pc = 0x4A10E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A10DCu;
        // 0x4a10e0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A10DCu, 0x4A10E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A10E4u;
label_4a10e4:
    // 0x4a10e4: 0x8f83c1e8  lw          $v1, -0x3E18($gp)
    ctx->pc = 0x4a10e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951400)));
label_4a10e8:
    // 0x4a10e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a10ec:
    // 0x4a10ec: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4a10ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_4a10f0:
    // 0x4a10f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a10f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4a10f4:
    // 0x4a10f4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x4a10f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4a10f8:
    // 0x4a10f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a10f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a10fc:
    // 0x4a10fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a10fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a1100:
    // 0x4a1100: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a1100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a1104:
    // 0x4a1104: 0x3e00008  jr          $ra
label_4a1108:
    if (ctx->pc == 0x4A1108u) {
        ctx->pc = 0x4A1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1104u;
        // 0x4a1108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A110Cu;
        goto label_4a110c;
    }
    ctx->pc = 0x4A1104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1104u;
        // 0x4a1108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A110Cu;
label_4a110c:
    // 0x4a110c: 0x0  nop
    ctx->pc = 0x4a110cu;
    // NOP
    ctx->pc = 0x4a1110u;
}
