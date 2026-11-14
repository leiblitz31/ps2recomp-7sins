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

// Function: sub_0031E7C8
// Address: 0x31e7c8 - 0x31e978
void sub_0031E7C8_0x31e7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E7C8_0x31e7c8");
#endif

    ctx->pc = 0x31e7c8u;

    // 0x31e7c8: 0x8f83a5cc  lw          $v1, -0x5A34($gp)
    ctx->pc = 0x31e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
    // 0x31e7cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31e7ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e7d0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x31e7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31e7d4: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x31e7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31e7d8: 0xace60014  sw          $a2, 0x14($a3)
    ctx->pc = 0x31e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 6));
    // 0x31e7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x31E7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7DCu;
        // 0x31e7e0: 0xace50010  sw          $a1, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E7E4u;
    // 0x31e7e4: 0x0  nop
    ctx->pc = 0x31e7e4u;
    // NOP
    // 0x31e7e8: 0x8f82a5cc  lw          $v0, -0x5A34($gp)
    ctx->pc = 0x31e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
    // 0x31e7ec: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E7ECu;
    {
        const bool branch_taken_0x31e7ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7ECu;
        // 0x31e7f0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e7ec) {
            ctx->pc = 0x31E800u;
            goto label_31e800;
        }
    }
    ctx->pc = 0x31E7F4u;
    // 0x31e7f4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x31e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31e7f8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x31e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x31e7fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x31e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_31e800:
    // 0x31e800: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31e800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31e804: 0x3e00008  jr          $ra
    ctx->pc = 0x31E804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E804u;
        // 0x31e808: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E80Cu;
    // 0x31e80c: 0x0  nop
    ctx->pc = 0x31e80cu;
    // NOP
    // 0x31e810: 0x8f83a5cc  lw          $v1, -0x5A34($gp)
    ctx->pc = 0x31e810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
    // 0x31e814: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x31e814u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e818: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31e818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31e81c: 0x1434821  addu        $t1, $t2, $v1
    ctx->pc = 0x31e81cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x31e820: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31e820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31e824: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31E824u;
    {
        const bool branch_taken_0x31e824 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x31E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E824u;
        // 0x31e828: 0x8d280004  lw          $t0, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e824) {
            ctx->pc = 0x31E840u;
            goto label_31e840;
        }
    }
    ctx->pc = 0x31E82Cu;
    // 0x31e82c: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x31e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x31e830: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x31e830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31e834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31e834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e838: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x31E838u;
    {
        const bool branch_taken_0x31e838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E838u;
        // 0x31e83c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e838) {
            ctx->pc = 0x31E88Cu;
            goto label_31e88c;
        }
    }
    ctx->pc = 0x31E840u;
label_31e840:
    // 0x31e840: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x31e840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x31e844: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x31e844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31e848: 0xc73818  mult        $a3, $a2, $a3
    ctx->pc = 0x31e848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x31e84c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x31e84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31e850: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31e850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x31e854: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x31e854u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31e858: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x31e858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x31e85c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31e860: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x31e860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x31e864: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x31e864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31e868: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x31e868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31e86c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x31e86cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x31e870: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x31e870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x31e874: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x31e874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x31e878: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x31e878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x31e87c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x31e87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e880: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x31e880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31e884: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x31e884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x31e888: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x31e888u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_31e88c:
    // 0x31e88c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E88Cu;
        // 0x31e890: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E894u;
    // 0x31e894: 0x0  nop
    ctx->pc = 0x31e894u;
    // NOP
    // 0x31e898: 0x8f82a5cc  lw          $v0, -0x5A34($gp)
    ctx->pc = 0x31e898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
    // 0x31e89c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x31e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31e8a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x31e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31e8a4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x31e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31e8a8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x31e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31e8ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31e8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31e8b0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x31e8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31e8b4: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E8B4u;
    {
        const bool branch_taken_0x31e8b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e8b4) {
            ctx->pc = 0x31E8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E8B4u;
            // 0x31e8b8: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E8C8u;
            goto label_31e8c8;
        }
    }
    ctx->pc = 0x31E8BCu;
    // 0x31e8bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31e8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x31E8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8C0u;
        // 0x31e8c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E8C8u;
label_31e8c8:
    // 0x31e8c8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x31e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31e8cc: 0x3c04cccc  lui         $a0, 0xCCCC
    ctx->pc = 0x31e8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52428 << 16));
    // 0x31e8d0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x31e8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x31e8d4: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x31e8d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x31e8d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31e8dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31e8e0: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x31e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x31e8e4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x31e8e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31e8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x31E8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E8E8u;
        // 0x31e8ec: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E8F0u;
    // 0x31e8f0: 0x8f82a5cc  lw          $v0, -0x5A34($gp)
    ctx->pc = 0x31e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
    // 0x31e8f4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x31e8f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e8f8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x31e8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31e8fc: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x31e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x31e900: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31e900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31e904: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x31e904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x31e908: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x31e908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31e90c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x31e90cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31e910: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x31E910u;
    {
        const bool branch_taken_0x31e910 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E910u;
        // 0x31e914: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e910) {
            ctx->pc = 0x31E950u;
            goto label_31e950;
        }
    }
    ctx->pc = 0x31E918u;
    // 0x31e918: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x31e918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x31e91c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x31e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31e920: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x31e920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x31e924: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x31e924u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x31e928: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x31e928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x31e92c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x31e92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31e930: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x31e930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e934: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x31e934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e938: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x31e938u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x31e93c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x31e93cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x31e940: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31e940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31e944: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x31e944u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x31e948: 0x3e00008  jr          $ra
    ctx->pc = 0x31E948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E948u;
        // 0x31e94c: 0xe4820000  swc1        $f2, 0x0($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E950u;
label_31e950:
    // 0x31e950: 0x3e00008  jr          $ra
    ctx->pc = 0x31E950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E950u;
        // 0x31e954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E958u;
    // 0x31e958: 0x8f83a5cc  lw          $v1, -0x5A34($gp)
    ctx->pc = 0x31e958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
    // 0x31e95c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x31e95cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31e960: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x31e960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31e964: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x31e964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31e968: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x31e968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x31e96c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x31e96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x31e970: 0x3e00008  jr          $ra
    ctx->pc = 0x31E970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E970u;
        // 0x31e974: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E978u;
}
