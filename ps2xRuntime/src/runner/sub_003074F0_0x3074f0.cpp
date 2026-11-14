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

// Function: sub_003074F0
// Address: 0x3074f0 - 0x3075d8
void sub_003074F0_0x3074f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003074F0_0x3074f0");
#endif

    switch (ctx->pc) {
        case 0x307520u: goto label_307520;
        case 0x307538u: goto label_307538;
        case 0x307540u: goto label_307540;
        case 0x307548u: goto label_307548;
        case 0x307554u: goto label_307554;
        case 0x307560u: goto label_307560;
        case 0x307568u: goto label_307568;
        case 0x307570u: goto label_307570;
        case 0x307580u: goto label_307580;
        case 0x307594u: goto label_307594;
        case 0x3075c0u: goto label_3075c0;
        case 0x3075d0u: goto label_3075d0;
        default: break;
    }

    ctx->pc = 0x3074f0u;

    // 0x3074f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3074f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3074f4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3074f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3074f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3074f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3074fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3074fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x307500: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x307500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x307504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x307504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x307508: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x307508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30750c: 0x24500fc8  addiu       $s0, $v0, 0xFC8
    ctx->pc = 0x30750cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x307510: 0x8c440fc8  lw          $a0, 0xFC8($v0)
    ctx->pc = 0x307510u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4F0FC8u));
    // 0x307514: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x307514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x307518: 0xc0c1d38  jal         func_3074E0
    ctx->pc = 0x307518u;
    SET_GPR_U32(ctx, 31, 0x307520u);
    ctx->pc = 0x30751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307518u;
    // 0x30751c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3074E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3074E0u, 0x307518u, 0x307520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307520u;
label_307520:
    // 0x307520: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x307520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x307524: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x307524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x307528: 0x24060330  addiu       $a2, $zero, 0x330
    ctx->pc = 0x307528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
    // 0x30752c: 0x24a50c48  addiu       $a1, $a1, 0xC48
    ctx->pc = 0x30752cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3144));
    // 0x307530: 0xc0c1d22  jal         func_307488
    ctx->pc = 0x307530u;
    SET_GPR_U32(ctx, 31, 0x307538u);
    ctx->pc = 0x307534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307530u;
    // 0x307534: 0x34845000  ori         $a0, $a0, 0x5000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    ctx->in_delay_slot = false;
    ctx->pc = 0x307488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307488u, 0x307530u, 0x307538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307538u;
label_307538:
    // 0x307538: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x307538u;
    SET_GPR_U32(ctx, 31, 0x307540u);
    ctx->pc = 0x30753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307538u;
    // 0x30753c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x307538u, 0x307540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307540u;
label_307540:
    // 0x307540: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x307540u;
    SET_GPR_U32(ctx, 31, 0x307548u);
    ctx->pc = 0x307544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307540u;
    // 0x307544: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x307540u, 0x307548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307548u;
label_307548:
    // 0x307548: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x307548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30754c: 0xc0c1d38  jal         func_3074E0
    ctx->pc = 0x30754Cu;
    SET_GPR_U32(ctx, 31, 0x307554u);
    ctx->pc = 0x307550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30754Cu;
    // 0x307550: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3074E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3074E0u, 0x30754Cu, 0x307554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307554u;
label_307554:
    // 0x307554: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x307554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x307558: 0xc0c1d38  jal         func_3074E0
    ctx->pc = 0x307558u;
    SET_GPR_U32(ctx, 31, 0x307560u);
    ctx->pc = 0x30755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307558u;
    // 0x30755c: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3074E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3074E0u, 0x307558u, 0x307560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307560u;
label_307560:
    // 0x307560: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x307560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x307564: 0x0  nop
    ctx->pc = 0x307564u;
    // NOP
label_307568:
    // 0x307568: 0xc0c1d34  jal         func_3074D0
    ctx->pc = 0x307568u;
    SET_GPR_U32(ctx, 31, 0x307570u);
    ctx->pc = 0x30756Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307568u;
    // 0x30756c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3074D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3074D0u, 0x307568u, 0x307570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307570u;
label_307570:
    // 0x307570: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x307570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x307574: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x307574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307578: 0xc0c1d38  jal         func_3074E0
    ctx->pc = 0x307578u;
    SET_GPR_U32(ctx, 31, 0x307580u);
    ctx->pc = 0x30757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307578u;
    // 0x30757c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3074E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3074E0u, 0x307578u, 0x307580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307580u;
label_307580:
    // 0x307580: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x307580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x307584: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x307584u;
    {
        const bool branch_taken_0x307584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307584) {
            ctx->pc = 0x307588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307584u;
            // 0x307588: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307568;
        }
    }
    ctx->pc = 0x30758Cu;
    // 0x30758c: 0xc0c1d34  jal         func_3074D0
    ctx->pc = 0x30758Cu;
    SET_GPR_U32(ctx, 31, 0x307594u);
    ctx->pc = 0x307590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30758Cu;
    // 0x307590: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3074D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3074D0u, 0x30758Cu, 0x307594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307594u;
label_307594:
    // 0x307594: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x307594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x307598: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x307598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30759c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x30759cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3075a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3075a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3075a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3075a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3075a8: 0xac620fc0  sw          $v0, 0xFC0($v1)
    ctx->pc = 0x3075a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4F0FC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F0FC0u, _value); } while (0);
    // 0x3075ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3075ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3075B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3075ACu;
        // 0x3075b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3075ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3075B4u;
    // 0x3075b4: 0x0  nop
    ctx->pc = 0x3075b4u;
    // NOP
    // 0x3075b8: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x3075b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x3075bc: 0xc  syscall     0
    ctx->pc = 0x3075bcu;
    ctx->pc = 0x3075C0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3075c0:
    // 0x3075c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3075C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3075C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3075C8u;
    // 0x3075c8: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x3075c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x3075cc: 0xc  syscall     0
    ctx->pc = 0x3075ccu;
    ctx->pc = 0x3075D0u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3075d0:
    // 0x3075d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3075D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3075D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3075D8u;
}
