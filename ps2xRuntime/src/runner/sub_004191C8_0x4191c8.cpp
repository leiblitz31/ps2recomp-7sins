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

// Function: sub_004191C8
// Address: 0x4191c8 - 0x419250
void sub_004191C8_0x4191c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004191C8_0x4191c8");
#endif

    switch (ctx->pc) {
        case 0x4191c8u: goto label_4191c8;
        case 0x4191ccu: goto label_4191cc;
        case 0x4191d0u: goto label_4191d0;
        case 0x4191d4u: goto label_4191d4;
        case 0x4191d8u: goto label_4191d8;
        case 0x4191dcu: goto label_4191dc;
        case 0x4191e0u: goto label_4191e0;
        case 0x4191e4u: goto label_4191e4;
        case 0x4191e8u: goto label_4191e8;
        case 0x4191ecu: goto label_4191ec;
        case 0x4191f0u: goto label_4191f0;
        case 0x4191f4u: goto label_4191f4;
        case 0x4191f8u: goto label_4191f8;
        case 0x4191fcu: goto label_4191fc;
        case 0x419200u: goto label_419200;
        case 0x419204u: goto label_419204;
        case 0x419208u: goto label_419208;
        case 0x41920cu: goto label_41920c;
        case 0x419210u: goto label_419210;
        case 0x419214u: goto label_419214;
        case 0x419218u: goto label_419218;
        case 0x41921cu: goto label_41921c;
        case 0x419220u: goto label_419220;
        case 0x419224u: goto label_419224;
        case 0x419228u: goto label_419228;
        case 0x41922cu: goto label_41922c;
        case 0x419230u: goto label_419230;
        case 0x419234u: goto label_419234;
        case 0x419238u: goto label_419238;
        case 0x41923cu: goto label_41923c;
        case 0x419240u: goto label_419240;
        case 0x419244u: goto label_419244;
        case 0x419248u: goto label_419248;
        case 0x41924cu: goto label_41924c;
        default: break;
    }

    ctx->pc = 0x4191c8u;

label_4191c8:
    // 0x4191c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4191c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4191cc:
    // 0x4191cc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4191ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4191d0:
    // 0x4191d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4191d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4191d4:
    // 0x4191d4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4191d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4191d8:
    // 0x4191d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4191d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4191dc:
    // 0x4191dc: 0x8c62e894  lw          $v0, -0x176C($v1)
    ctx->pc = 0x4191dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961300)));
label_4191e0:
    // 0x4191e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4191e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4191e4:
    // 0x4191e4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4191e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4191e8:
    // 0x4191e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4191e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4191ec:
    // 0x4191ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4191ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4191f0:
    // 0x4191f0: 0x40f809  jalr        $v0
label_4191f4:
    if (ctx->pc == 0x4191F4u) {
        ctx->pc = 0x4191F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4191F0u;
        // 0x4191f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4191F8u;
        goto label_4191f8;
    }
    ctx->pc = 0x4191F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4191F8u);
        ctx->pc = 0x4191F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4191F0u;
        // 0x4191f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4191F0u, 0x4191F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4191F8u;
label_4191f8:
    // 0x4191f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4191f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4191fc:
    // 0x4191fc: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_419200:
    if (ctx->pc == 0x419200u) {
        ctx->pc = 0x419200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4191FCu;
        // 0x419200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419204u;
        goto label_419204;
    }
    ctx->pc = 0x4191FCu;
    {
        const bool branch_taken_0x4191fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x419200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4191FCu;
        // 0x419200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4191fc) {
            ctx->pc = 0x419228u;
            goto label_419228;
        }
    }
    ctx->pc = 0x419204u;
label_419204:
    // 0x419204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x419204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_419208:
    // 0x419208: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x419208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_41920c:
    // 0x41920c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41920cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_419210:
    // 0x419210: 0xc1035f6  jal         func_40D7D8
label_419214:
    if (ctx->pc == 0x419214u) {
        ctx->pc = 0x419214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419210u;
        // 0x419214: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419218u;
        goto label_419218;
    }
    ctx->pc = 0x419210u;
    SET_GPR_U32(ctx, 31, 0x419218u);
    ctx->pc = 0x419214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419210u;
    // 0x419214: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x419210u, 0x419218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419218u;
label_419218:
    // 0x419218: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x419218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41921c:
    // 0x41921c: 0xc103628  jal         func_40D8A0
label_419220:
    if (ctx->pc == 0x419220u) {
        ctx->pc = 0x419220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41921Cu;
        // 0x419220: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419224u;
        goto label_419224;
    }
    ctx->pc = 0x41921Cu;
    SET_GPR_U32(ctx, 31, 0x419224u);
    ctx->pc = 0x419220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41921Cu;
    // 0x419220: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41921Cu, 0x419224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419224u;
label_419224:
    // 0x419224: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x419224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419228:
    // 0x419228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x419228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41922c:
    // 0x41922c: 0x230100b  movn        $v0, $s1, $s0
    ctx->pc = 0x41922cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_419230:
    // 0x419230: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x419230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_419234:
    // 0x419234: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x419234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_419238:
    // 0x419238: 0x3e00008  jr          $ra
label_41923c:
    if (ctx->pc == 0x41923Cu) {
        ctx->pc = 0x41923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419238u;
        // 0x41923c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419240u;
        goto label_419240;
    }
    ctx->pc = 0x419238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419238u;
        // 0x41923c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419240u;
label_419240:
    // 0x419240: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x419240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_419244:
    // 0x419244: 0x3e00008  jr          $ra
label_419248:
    if (ctx->pc == 0x419248u) {
        ctx->pc = 0x419248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419244u;
        // 0x419248: 0x8c62e9a0  lw          $v0, -0x1660($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41924Cu;
        goto label_41924c;
    }
    ctx->pc = 0x419244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419244u;
        // 0x419248: 0x8c62e9a0  lw          $v0, -0x1660($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961568)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41924Cu;
label_41924c:
    // 0x41924c: 0x0  nop
    ctx->pc = 0x41924cu;
    // NOP
    ctx->pc = 0x419250u;
}
