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

// Function: sub_003830E8
// Address: 0x3830e8 - 0x383440
void sub_003830E8_0x3830e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003830E8_0x3830e8");
#endif

    switch (ctx->pc) {
        case 0x383168u: goto label_383168;
        case 0x3831c4u: goto label_3831c4;
        case 0x3831ecu: goto label_3831ec;
        case 0x3832b0u: goto label_3832b0;
        case 0x38330cu: goto label_38330c;
        case 0x383334u: goto label_383334;
        case 0x3833f8u: goto label_3833f8;
        default: break;
    }

    ctx->pc = 0x3830e8u;

    // 0x3830e8: 0x8f82a934  lw          $v0, -0x56CC($gp)
    ctx->pc = 0x3830e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945076)));
    // 0x3830ec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3830ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3830f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3830f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3830f4: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3830F4u;
    {
        const bool branch_taken_0x3830f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3830F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3830F4u;
        // 0x3830f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3830f4) {
            ctx->pc = 0x3831A4u;
            goto label_3831a4;
        }
    }
    ctx->pc = 0x3830FCu;
    // 0x3830fc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3830fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x383100: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x383100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383104: 0x71023  negu        $v0, $a3
    ctx->pc = 0x383104u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x383108: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x383108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x38310c: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x38310Cu;
    {
        const bool branch_taken_0x38310c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x383110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38310Cu;
        // 0x383110: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38310c) {
            ctx->pc = 0x383164u;
            goto label_383164;
        }
    }
    ctx->pc = 0x383114u;
    // 0x383114: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x383114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x383118: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x383118u;
    {
        const bool branch_taken_0x383118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383118u;
        // 0x38311c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383118) {
            ctx->pc = 0x38314Cu;
            goto label_38314c;
        }
    }
    ctx->pc = 0x383120u;
    // 0x383120: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x383120u;
    {
        const bool branch_taken_0x383120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383120) {
            ctx->pc = 0x383124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383120u;
            // 0x383124: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38313Cu;
            goto label_38313c;
        }
    }
    ctx->pc = 0x383128u;
    // 0x383128: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x383128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x38312c: 0x2486001c  addiu       $a2, $a0, 0x1C
    ctx->pc = 0x38312cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x383130: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x383130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x383134: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x383134u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x383138: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x383138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_38313c:
    // 0x38313c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x38313cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383140: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x383140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x383144: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x383144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x383148: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x383148u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_38314c:
    // 0x38314c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x38314cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x383150: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x383150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383154: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x383154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x383158: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x383158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x38315c: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x38315Cu;
    {
        const bool branch_taken_0x38315c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x383160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38315Cu;
        // 0x383160: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38315c) {
            ctx->pc = 0x3831A4u;
            goto label_3831a4;
        }
    }
    ctx->pc = 0x383164u;
label_383164:
    // 0x383164: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x383164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_383168:
    // 0x383168: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x383168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38316c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x38316cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383170: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x383170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x383174: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x383174u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x383178: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x383178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38317c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x38317cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383180: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x383180u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x383184: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x383184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x383188: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x383188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38318c: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x38318cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x383190: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x383190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x383194: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x383194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383198: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x383198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x38319c: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x38319Cu;
    {
        const bool branch_taken_0x38319c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3831A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38319Cu;
        // 0x3831a0: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38319c) {
            ctx->pc = 0x383168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383168;
        }
    }
    ctx->pc = 0x3831A4u;
label_3831a4:
    // 0x3831a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3831A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3831A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3831A4u;
        // 0x3831a8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3831A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3831ACu;
    // 0x3831ac: 0x0  nop
    ctx->pc = 0x3831acu;
    // NOP
    // 0x3831b0: 0x8f82a93c  lw          $v0, -0x56C4($gp)
    ctx->pc = 0x3831b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945084)));
    // 0x3831b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3831b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3831b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3831b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3831bc: 0xc0e0a08  jal         func_382820
    ctx->pc = 0x3831BCu;
    SET_GPR_U32(ctx, 31, 0x3831C4u);
    ctx->pc = 0x3831C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3831BCu;
    // 0x3831c0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382820u, 0x3831BCu, 0x3831C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3831C4u;
label_3831c4:
    // 0x3831c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3831c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3831c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3831C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3831CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3831C8u;
        // 0x3831cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3831C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3831D0u;
    // 0x3831d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3831d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3831d4: 0x8f82a93c  lw          $v0, -0x56C4($gp)
    ctx->pc = 0x3831d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945084)));
    // 0x3831d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3831d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3831dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3831dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3831e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3831e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3831e4: 0xc0e0a86  jal         func_382A18
    ctx->pc = 0x3831E4u;
    SET_GPR_U32(ctx, 31, 0x3831ECu);
    ctx->pc = 0x3831E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3831E4u;
    // 0x3831e8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382A18u, 0x3831E4u, 0x3831ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3831ECu;
label_3831ec:
    // 0x3831ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3831ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3831f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3831f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3831f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3831f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3831f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3831F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3831FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3831F8u;
        // 0x3831fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3831F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383200u;
    // 0x383200: 0x8f83a93c  lw          $v1, -0x56C4($gp)
    ctx->pc = 0x383200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945084)));
    // 0x383204: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x383204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x383208: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x383208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38320c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x38320cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x383210: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x383210u;
    {
        const bool branch_taken_0x383210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383210) {
            ctx->pc = 0x383214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383210u;
            // 0x383214: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383220u;
            goto label_383220;
        }
    }
    ctx->pc = 0x383218u;
    // 0x383218: 0x3e00008  jr          $ra
    ctx->pc = 0x383218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383218u;
        // 0x38321c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383220u;
label_383220:
    // 0x383220: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x383220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x383224: 0x3e00008  jr          $ra
    ctx->pc = 0x383224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383224u;
        // 0x383228: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38322Cu;
    // 0x38322c: 0x0  nop
    ctx->pc = 0x38322cu;
    // NOP
    // 0x383230: 0x8f82a93c  lw          $v0, -0x56C4($gp)
    ctx->pc = 0x383230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945084)));
    // 0x383234: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x383234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x383238: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x383238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38323c: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x38323Cu;
    {
        const bool branch_taken_0x38323c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x383240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38323Cu;
        // 0x383240: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38323c) {
            ctx->pc = 0x3832ECu;
            goto label_3832ec;
        }
    }
    ctx->pc = 0x383244u;
    // 0x383244: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x383244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x383248: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x383248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38324c: 0x71023  negu        $v0, $a3
    ctx->pc = 0x38324cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x383250: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x383250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x383254: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x383254u;
    {
        const bool branch_taken_0x383254 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x383258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383254u;
        // 0x383258: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383254) {
            ctx->pc = 0x3832ACu;
            goto label_3832ac;
        }
    }
    ctx->pc = 0x38325Cu;
    // 0x38325c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x38325cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x383260: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x383260u;
    {
        const bool branch_taken_0x383260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383260u;
        // 0x383264: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383260) {
            ctx->pc = 0x383294u;
            goto label_383294;
        }
    }
    ctx->pc = 0x383268u;
    // 0x383268: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x383268u;
    {
        const bool branch_taken_0x383268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383268) {
            ctx->pc = 0x38326Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383268u;
            // 0x38326c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383284u;
            goto label_383284;
        }
    }
    ctx->pc = 0x383270u;
    // 0x383270: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x383270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x383274: 0x2486001c  addiu       $a2, $a0, 0x1C
    ctx->pc = 0x383274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x383278: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x383278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x38327c: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x38327cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x383280: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x383280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_383284:
    // 0x383284: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x383284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383288: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x383288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x38328c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x38328cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x383290: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x383290u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_383294:
    // 0x383294: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x383294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x383298: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x383298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38329c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x38329cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3832a0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3832a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3832a4: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x3832A4u;
    {
        const bool branch_taken_0x3832a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3832A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3832A4u;
        // 0x3832a8: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3832a4) {
            ctx->pc = 0x3832ECu;
            goto label_3832ec;
        }
    }
    ctx->pc = 0x3832ACu;
label_3832ac:
    // 0x3832ac: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3832acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3832b0:
    // 0x3832b0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3832b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3832b4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3832b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3832b8: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3832b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x3832bc: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x3832bcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x3832c0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x3832c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3832c4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3832c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3832c8: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x3832c8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x3832cc: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x3832ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3832d0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3832d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3832d4: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x3832d4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x3832d8: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x3832d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3832dc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3832dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3832e0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x3832e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x3832e4: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x3832E4u;
    {
        const bool branch_taken_0x3832e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3832E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3832E4u;
        // 0x3832e8: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3832e4) {
            ctx->pc = 0x3832B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3832b0;
        }
    }
    ctx->pc = 0x3832ECu;
label_3832ec:
    // 0x3832ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3832ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3832F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3832ECu;
        // 0x3832f0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3832ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3832F4u;
    // 0x3832f4: 0x0  nop
    ctx->pc = 0x3832f4u;
    // NOP
    // 0x3832f8: 0x8f82a944  lw          $v0, -0x56BC($gp)
    ctx->pc = 0x3832f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945092)));
    // 0x3832fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3832fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x383300: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383304: 0xc0e0a08  jal         func_382820
    ctx->pc = 0x383304u;
    SET_GPR_U32(ctx, 31, 0x38330Cu);
    ctx->pc = 0x383308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383304u;
    // 0x383308: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382820u, 0x383304u, 0x38330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38330Cu;
label_38330c:
    // 0x38330c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38330cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383310: 0x3e00008  jr          $ra
    ctx->pc = 0x383310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383310u;
        // 0x383314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383318u;
    // 0x383318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x383318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38331c: 0x8f82a944  lw          $v0, -0x56BC($gp)
    ctx->pc = 0x38331cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945092)));
    // 0x383320: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x383320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x383324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x383324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38332c: 0xc0e0a86  jal         func_382A18
    ctx->pc = 0x38332Cu;
    SET_GPR_U32(ctx, 31, 0x383334u);
    ctx->pc = 0x383330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38332Cu;
    // 0x383330: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382A18u, 0x38332Cu, 0x383334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383334u;
label_383334:
    // 0x383334: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x383334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38333c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38333cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383340: 0x3e00008  jr          $ra
    ctx->pc = 0x383340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383340u;
        // 0x383344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383348u;
    // 0x383348: 0x8f83a944  lw          $v1, -0x56BC($gp)
    ctx->pc = 0x383348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945092)));
    // 0x38334c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x38334cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x383350: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x383350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x383354: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x383354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x383358: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x383358u;
    {
        const bool branch_taken_0x383358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383358) {
            ctx->pc = 0x38335Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383358u;
            // 0x38335c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383368u;
            goto label_383368;
        }
    }
    ctx->pc = 0x383360u;
    // 0x383360: 0x3e00008  jr          $ra
    ctx->pc = 0x383360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383360u;
        // 0x383364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383368u;
label_383368:
    // 0x383368: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x383368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x38336c: 0x3e00008  jr          $ra
    ctx->pc = 0x38336Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38336Cu;
        // 0x383370: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38336Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383374u;
    // 0x383374: 0x0  nop
    ctx->pc = 0x383374u;
    // NOP
    // 0x383378: 0x8f82a944  lw          $v0, -0x56BC($gp)
    ctx->pc = 0x383378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945092)));
    // 0x38337c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x38337cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x383380: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x383380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x383384: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x383384u;
    {
        const bool branch_taken_0x383384 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x383388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383384u;
        // 0x383388: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383384) {
            ctx->pc = 0x383434u;
            goto label_383434;
        }
    }
    ctx->pc = 0x38338Cu;
    // 0x38338c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x38338cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x383390: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x383390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383394: 0x71023  negu        $v0, $a3
    ctx->pc = 0x383394u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x383398: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x383398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x38339c: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x38339Cu;
    {
        const bool branch_taken_0x38339c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3833A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38339Cu;
        // 0x3833a0: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38339c) {
            ctx->pc = 0x3833F4u;
            goto label_3833f4;
        }
    }
    ctx->pc = 0x3833A4u;
    // 0x3833a4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x3833a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3833a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3833A8u;
    {
        const bool branch_taken_0x3833a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3833ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3833A8u;
        // 0x3833ac: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3833a8) {
            ctx->pc = 0x3833DCu;
            goto label_3833dc;
        }
    }
    ctx->pc = 0x3833B0u;
    // 0x3833b0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3833B0u;
    {
        const bool branch_taken_0x3833b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3833b0) {
            ctx->pc = 0x3833B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3833B0u;
            // 0x3833b4: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3833CCu;
            goto label_3833cc;
        }
    }
    ctx->pc = 0x3833B8u;
    // 0x3833b8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x3833b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3833bc: 0x2486001c  addiu       $a2, $a0, 0x1C
    ctx->pc = 0x3833bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x3833c0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3833c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3833c4: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x3833c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3833c8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3833c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3833cc:
    // 0x3833cc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3833ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3833d0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3833d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3833d4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3833d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3833d8: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x3833d8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_3833dc:
    // 0x3833dc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x3833dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3833e0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3833e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3833e4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3833e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3833e8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3833e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3833ec: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x3833ECu;
    {
        const bool branch_taken_0x3833ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3833F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3833ECu;
        // 0x3833f0: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3833ec) {
            ctx->pc = 0x383434u;
            goto label_383434;
        }
    }
    ctx->pc = 0x3833F4u;
label_3833f4:
    // 0x3833f4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3833f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3833f8:
    // 0x3833f8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3833f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3833fc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3833fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383400: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x383400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x383404: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x383404u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x383408: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x383408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x38340c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x38340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383410: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x383410u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x383414: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x383414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x383418: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x383418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38341c: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x38341cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x383420: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x383420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x383424: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x383424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383428: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x383428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x38342c: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x38342Cu;
    {
        const bool branch_taken_0x38342c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x383430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38342Cu;
        // 0x383430: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38342c) {
            ctx->pc = 0x3833F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3833f8;
        }
    }
    ctx->pc = 0x383434u;
label_383434:
    // 0x383434: 0x3e00008  jr          $ra
    ctx->pc = 0x383434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383434u;
        // 0x383438: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38343Cu;
    // 0x38343c: 0x0  nop
    ctx->pc = 0x38343cu;
    // NOP
    ctx->pc = 0x383440u;
}
