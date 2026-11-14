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

// Function: sub_004981A8
// Address: 0x4981a8 - 0x498268
void sub_004981A8_0x4981a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004981A8_0x4981a8");
#endif

    switch (ctx->pc) {
        case 0x4981a8u: goto label_4981a8;
        case 0x4981acu: goto label_4981ac;
        case 0x4981b0u: goto label_4981b0;
        case 0x4981b4u: goto label_4981b4;
        case 0x4981b8u: goto label_4981b8;
        case 0x4981bcu: goto label_4981bc;
        case 0x4981c0u: goto label_4981c0;
        case 0x4981c4u: goto label_4981c4;
        case 0x4981c8u: goto label_4981c8;
        case 0x4981ccu: goto label_4981cc;
        case 0x4981d0u: goto label_4981d0;
        case 0x4981d4u: goto label_4981d4;
        case 0x4981d8u: goto label_4981d8;
        case 0x4981dcu: goto label_4981dc;
        case 0x4981e0u: goto label_4981e0;
        case 0x4981e4u: goto label_4981e4;
        case 0x4981e8u: goto label_4981e8;
        case 0x4981ecu: goto label_4981ec;
        case 0x4981f0u: goto label_4981f0;
        case 0x4981f4u: goto label_4981f4;
        case 0x4981f8u: goto label_4981f8;
        case 0x4981fcu: goto label_4981fc;
        case 0x498200u: goto label_498200;
        case 0x498204u: goto label_498204;
        case 0x498208u: goto label_498208;
        case 0x49820cu: goto label_49820c;
        case 0x498210u: goto label_498210;
        case 0x498214u: goto label_498214;
        case 0x498218u: goto label_498218;
        case 0x49821cu: goto label_49821c;
        case 0x498220u: goto label_498220;
        case 0x498224u: goto label_498224;
        case 0x498228u: goto label_498228;
        case 0x49822cu: goto label_49822c;
        case 0x498230u: goto label_498230;
        case 0x498234u: goto label_498234;
        case 0x498238u: goto label_498238;
        case 0x49823cu: goto label_49823c;
        case 0x498240u: goto label_498240;
        case 0x498244u: goto label_498244;
        case 0x498248u: goto label_498248;
        case 0x49824cu: goto label_49824c;
        case 0x498250u: goto label_498250;
        case 0x498254u: goto label_498254;
        case 0x498258u: goto label_498258;
        case 0x49825cu: goto label_49825c;
        case 0x498260u: goto label_498260;
        case 0x498264u: goto label_498264;
        default: break;
    }

    ctx->pc = 0x4981a8u;

label_4981a8:
    // 0x4981a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4981a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4981ac:
    // 0x4981ac: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x4981acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4981b0:
    // 0x4981b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4981b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4981b4:
    // 0x4981b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4981b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4981b8:
    // 0x4981b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4981b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4981bc:
    // 0x4981bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4981bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4981c0:
    // 0x4981c0: 0x2412002c  addiu       $s2, $zero, 0x2C
    ctx->pc = 0x4981c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_4981c4:
    // 0x4981c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4981c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4981c8:
    // 0x4981c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4981c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4981cc:
    // 0x4981cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4981ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4981d0:
    // 0x4981d0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4981d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4981d4:
    // 0x4981d4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_4981d8:
    if (ctx->pc == 0x4981D8u) {
        ctx->pc = 0x4981D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4981D4u;
        // 0x4981d8: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4981DCu;
        goto label_4981dc;
    }
    ctx->pc = 0x4981D4u;
    {
        const bool branch_taken_0x4981d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4981D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4981D4u;
        // 0x4981d8: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4981d4) {
            ctx->pc = 0x4981F4u;
            goto label_4981f4;
        }
    }
    ctx->pc = 0x4981DCu;
label_4981dc:
    // 0x4981dc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4981dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4981e0:
    // 0x4981e0: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x4981e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_4981e4:
    // 0x4981e4: 0x40f809  jalr        $v0
label_4981e8:
    if (ctx->pc == 0x4981E8u) {
        ctx->pc = 0x4981ECu;
        goto label_4981ec;
    }
    ctx->pc = 0x4981E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4981ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4981E4u, 0x4981ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4981ECu;
label_4981ec:
    // 0x4981ec: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x4981ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4981f0:
    // 0x4981f0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x4981f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4981f4:
    // 0x4981f4: 0x8e33000c  lw          $s3, 0xC($s1)
    ctx->pc = 0x4981f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4981f8:
    // 0x4981f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4981f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4981fc:
    // 0x4981fc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x4981fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_498200:
    // 0x498200: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x498200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_498204:
    // 0x498204: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x498204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_498208:
    // 0x498208: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_49820c:
    if (ctx->pc == 0x49820Cu) {
        ctx->pc = 0x49820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498208u;
        // 0x49820c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498210u;
        goto label_498210;
    }
    ctx->pc = 0x498208u;
    {
        const bool branch_taken_0x498208 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x49820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498208u;
        // 0x49820c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498208) {
            ctx->pc = 0x498244u;
            goto label_498244;
        }
    }
    ctx->pc = 0x498210u;
label_498210:
    // 0x498210: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x498210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_498214:
    // 0x498214: 0x0  nop
    ctx->pc = 0x498214u;
    // NOP
label_498218:
    // 0x498218: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x498218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_49821c:
    // 0x49821c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x49821cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_498220:
    // 0x498220: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x498220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_498224:
    // 0x498224: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x498224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_498228:
    // 0x498228: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x498228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_49822c:
    // 0x49822c: 0xc126736  jal         func_499CD8
label_498230:
    if (ctx->pc == 0x498230u) {
        ctx->pc = 0x498230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49822Cu;
        // 0x498230: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498234u;
        goto label_498234;
    }
    ctx->pc = 0x49822Cu;
    SET_GPR_U32(ctx, 31, 0x498234u);
    ctx->pc = 0x498230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49822Cu;
    // 0x498230: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499CD8u, 0x49822Cu, 0x498234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498234u;
label_498234:
    // 0x498234: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x498234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_498238:
    // 0x498238: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x498238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_49823c:
    // 0x49823c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_498240:
    if (ctx->pc == 0x498240u) {
        ctx->pc = 0x498240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49823Cu;
        // 0x498240: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498244u;
        goto label_498244;
    }
    ctx->pc = 0x49823Cu;
    {
        const bool branch_taken_0x49823c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49823c) {
            ctx->pc = 0x498240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49823Cu;
            // 0x498240: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_498218;
        }
    }
    ctx->pc = 0x498244u;
label_498244:
    // 0x498244: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x498244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_498248:
    // 0x498248: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x498248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49824c:
    // 0x49824c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x49824cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_498250:
    // 0x498250: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x498250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_498254:
    // 0x498254: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x498254u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_498258:
    // 0x498258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x498258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49825c:
    // 0x49825c: 0x3e00008  jr          $ra
label_498260:
    if (ctx->pc == 0x498260u) {
        ctx->pc = 0x498260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49825Cu;
        // 0x498260: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498264u;
        goto label_498264;
    }
    ctx->pc = 0x49825Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49825Cu;
        // 0x498260: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49825Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498264u;
label_498264:
    // 0x498264: 0x0  nop
    ctx->pc = 0x498264u;
    // NOP
    ctx->pc = 0x498268u;
}
