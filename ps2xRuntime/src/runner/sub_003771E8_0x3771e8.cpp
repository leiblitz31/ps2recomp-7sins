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

// Function: sub_003771E8
// Address: 0x3771e8 - 0x3772e8
void sub_003771E8_0x3771e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003771E8_0x3771e8");
#endif

    switch (ctx->pc) {
        case 0x377224u: goto label_377224;
        case 0x37729cu: goto label_37729c;
        case 0x3772a8u: goto label_3772a8;
        default: break;
    }

    ctx->pc = 0x3771e8u;

    // 0x3771e8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3771e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3771ec: 0x2465c430  addiu       $a1, $v1, -0x3BD0
    ctx->pc = 0x3771ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951984));
    // 0x3771f0: 0xac64c430  sw          $a0, -0x3BD0($v1)
    ctx->pc = 0x3771f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x61C430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61C430u, _value); } while (0);
    // 0x3771f4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3771f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C434u));
    // 0x3771f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3771f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3771fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3771FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3771FCu;
        // 0x377200: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3771FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377204u;
    // 0x377204: 0x0  nop
    ctx->pc = 0x377204u;
    // NOP
    // 0x377208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x377208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37720c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x37720cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x377210: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x377210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x377214: 0x24a57d50  addiu       $a1, $a1, 0x7D50
    ctx->pc = 0x377214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32080));
    // 0x377218: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x377218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x37721c: 0xc0e70a4  jal         func_39C290
    ctx->pc = 0x37721Cu;
    SET_GPR_U32(ctx, 31, 0x377224u);
    ctx->pc = 0x377220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37721Cu;
    // 0x377220: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C290u, 0x37721Cu, 0x377224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377224u;
label_377224:
    // 0x377224: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x377224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x377228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37722c: 0x3e00008  jr          $ra
    ctx->pc = 0x37722Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37722Cu;
        // 0x377230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37722Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377234u;
    // 0x377234: 0x0  nop
    ctx->pc = 0x377234u;
    // NOP
    // 0x377238: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x377238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x37723c: 0x2443c430  addiu       $v1, $v0, -0x3BD0
    ctx->pc = 0x37723cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
    // 0x377240: 0xac44c430  sw          $a0, -0x3BD0($v0)
    ctx->pc = 0x377240u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x61C430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61C430u, _value); } while (0);
    // 0x377244: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x377244u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x61C434u));
    // 0x377248: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x377248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37724c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x37724cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x377250: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x377250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x377254: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x377254u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x377258: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x377258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x37725c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x37725cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x377260: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x377260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x377264: 0x3e00008  jr          $ra
    ctx->pc = 0x377264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377264u;
        // 0x377268: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37726Cu;
    // 0x37726c: 0x0  nop
    ctx->pc = 0x37726cu;
    // NOP
    // 0x377270: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x377270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x377274: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x377274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x377278: 0x8c43c434  lw          $v1, -0x3BCC($v0)
    ctx->pc = 0x377278u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C434u));
    // 0x37727c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37727cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x377280: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x377280u;
    {
        const bool branch_taken_0x377280 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x377284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377280u;
        // 0x377284: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377280) {
            ctx->pc = 0x3772B0u;
            goto label_3772b0;
        }
    }
    ctx->pc = 0x377288u;
    // 0x377288: 0x2402012a  addiu       $v0, $zero, 0x12A
    ctx->pc = 0x377288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    // 0x37728c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37728cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x377290: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x377290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x377294: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x377294u;
    SET_GPR_U32(ctx, 31, 0x37729Cu);
    ctx->pc = 0x377298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377294u;
    // 0x377298: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x377294u, 0x37729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37729Cu;
label_37729c:
    // 0x37729c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x37729cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3772a0: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3772A0u;
    SET_GPR_U32(ctx, 31, 0x3772A8u);
    ctx->pc = 0x3772A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3772A0u;
    // 0x3772a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3772A0u, 0x3772A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3772A8u;
label_3772a8:
    // 0x3772a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3772A8u;
    {
        const bool branch_taken_0x3772a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3772ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3772A8u;
        // 0x3772ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3772a8) {
            ctx->pc = 0x3772B8u;
            goto label_3772b8;
        }
    }
    ctx->pc = 0x3772B0u;
label_3772b0:
    // 0x3772b0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x3772b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3772b4: 0x0  nop
    ctx->pc = 0x3772b4u;
    // NOP
label_3772b8:
    // 0x3772b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3772b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3772bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3772BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3772C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3772BCu;
        // 0x3772c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3772BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3772C4u;
    // 0x3772c4: 0x0  nop
    ctx->pc = 0x3772c4u;
    // NOP
    // 0x3772c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3772c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3772cc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3772ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3772d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3772D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3772D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3772D0u;
        // 0x3772d4: 0xac62c43c  sw          $v0, -0x3BC4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294951996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3772D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3772D8u;
    // 0x3772d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3772d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3772dc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3772dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3772e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3772E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3772E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3772E0u;
        // 0x3772e4: 0xac62c440  sw          $v0, -0x3BC0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3772E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3772E8u;
}
