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

// Function: sub_002F6750
// Address: 0x2f6750 - 0x2f6838
void sub_002F6750_0x2f6750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6750_0x2f6750");
#endif

    switch (ctx->pc) {
        case 0x2f67c0u: goto label_2f67c0;
        case 0x2f67d8u: goto label_2f67d8;
        case 0x2f67f0u: goto label_2f67f0;
        case 0x2f680cu: goto label_2f680c;
        default: break;
    }

    ctx->pc = 0x2f6750u;

    // 0x2f6750: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f6750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f6754: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f6754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6758: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2f6758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2f675c: 0x3c11004f  lui         $s1, 0x4F
    ctx->pc = 0x2f675cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
    // 0x2f6760: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f6760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f6764: 0x8e22ef28  lw          $v0, -0x10D8($s1)
    ctx->pc = 0x2f6764u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4EEF28u));
    // 0x2f6768: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2f6768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2f676c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F676Cu;
    {
        const bool branch_taken_0x2f676c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F6770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F676Cu;
        // 0x2f6770: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f676c) {
            ctx->pc = 0x2F6798u;
            goto label_2f6798;
        }
    }
    ctx->pc = 0x2F6774u;
    // 0x2f6774: 0x3c10004f  lui         $s0, 0x4F
    ctx->pc = 0x2f6774u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
    // 0x2f6778: 0x8e02ef2c  lw          $v0, -0x10D4($s0)
    ctx->pc = 0x2f6778u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4EEF2Cu));
    // 0x2f677c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F677Cu;
    {
        const bool branch_taken_0x2f677c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F677Cu;
        // 0x2f6780: 0x3c12004f  lui         $s2, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f677c) {
            ctx->pc = 0x2F679Cu;
            goto label_2f679c;
        }
    }
    ctx->pc = 0x2F6784u;
    // 0x2f6784: 0x8e42ef30  lw          $v0, -0x10D0($s2)
    ctx->pc = 0x2f6784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294962992)));
    // 0x2f6788: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F6788u;
    {
        const bool branch_taken_0x2f6788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6788u;
        // 0x2f678c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6788) {
            ctx->pc = 0x2F6820u;
            goto label_2f6820;
        }
    }
    ctx->pc = 0x2F6790u;
    // 0x2f6790: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6790u;
    {
        const bool branch_taken_0x2f6790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6790u;
        // 0x2f6794: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6790) {
            ctx->pc = 0x2F67A4u;
            goto label_2f67a4;
        }
    }
    ctx->pc = 0x2F6798u;
label_2f6798:
    // 0x2f6798: 0x3c10004f  lui         $s0, 0x4F
    ctx->pc = 0x2f6798u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
label_2f679c:
    // 0x2f679c: 0x3c12004f  lui         $s2, 0x4F
    ctx->pc = 0x2f679cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)79 << 16));
    // 0x2f67a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f67a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f67a4:
    // 0x2f67a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f67a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f67a8: 0x24429a30  addiu       $v0, $v0, -0x65D0
    ctx->pc = 0x2f67a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941232));
    // 0x2f67ac: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2f67acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2f67b0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2f67b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2f67b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f67b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f67b8: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x2F67B8u;
    SET_GPR_U32(ctx, 31, 0x2F67C0u);
    ctx->pc = 0x2F67BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F67B8u;
    // 0x2f67bc: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x2F67B8u, 0x2F67C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F67C0u;
label_2f67c0:
    // 0x2f67c0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f67c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2f67c4: 0xae22ef28  sw          $v0, -0x10D8($s1)
    ctx->pc = 0x2f67c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962984), GPR_U32(ctx, 2));
    // 0x2f67c8: 0x24639a40  addiu       $v1, $v1, -0x65C0
    ctx->pc = 0x2f67c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941248));
    // 0x2f67cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f67ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f67d0: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x2F67D0u;
    SET_GPR_U32(ctx, 31, 0x2F67D8u);
    ctx->pc = 0x2F67D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F67D0u;
    // 0x2f67d4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x2F67D0u, 0x2F67D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F67D8u;
label_2f67d8:
    // 0x2f67d8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f67d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2f67dc: 0xae02ef2c  sw          $v0, -0x10D4($s0)
    ctx->pc = 0x2f67dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294962988), GPR_U32(ctx, 2));
    // 0x2f67e0: 0x24639a50  addiu       $v1, $v1, -0x65B0
    ctx->pc = 0x2f67e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941264));
    // 0x2f67e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f67e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f67e8: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x2F67E8u;
    SET_GPR_U32(ctx, 31, 0x2F67F0u);
    ctx->pc = 0x2F67ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F67E8u;
    // 0x2f67ec: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x2F67E8u, 0x2F67F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F67F0u;
label_2f67f0:
    // 0x2f67f0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f67f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2f67f4: 0xae42ef30  sw          $v0, -0x10D0($s2)
    ctx->pc = 0x2f67f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294962992), GPR_U32(ctx, 2));
    // 0x2f67f8: 0x24639a60  addiu       $v1, $v1, -0x65A0
    ctx->pc = 0x2f67f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941280));
    // 0x2f67fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f67fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6800: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2f6800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2f6804: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x2F6804u;
    SET_GPR_U32(ctx, 31, 0x2F680Cu);
    ctx->pc = 0x2F6808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6804u;
    // 0x2f6808: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x2F6804u, 0x2F680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F680Cu;
label_2f680c:
    // 0x2f680c: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2f680cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2f6810: 0xac62ef20  sw          $v0, -0x10E0($v1)
    ctx->pc = 0x2f6810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4EEF20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4EEF20u, _value); } while (0);
    // 0x2f6814: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f6814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f6818: 0xac40ef34  sw          $zero, -0x10CC($v0)
    ctx->pc = 0x2f6818u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4EEF34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4EEF34u, _value); } while (0);
    // 0x2f681c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f681cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f6820:
    // 0x2f6820: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2f6820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6824: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2f6824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6828: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f6828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f682c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F682Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F682Cu;
        // 0x2f6830: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F682Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6834u;
    // 0x2f6834: 0x0  nop
    ctx->pc = 0x2f6834u;
    // NOP
    ctx->pc = 0x2f6838u;
}
