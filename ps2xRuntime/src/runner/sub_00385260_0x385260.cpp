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

// Function: sub_00385260
// Address: 0x385260 - 0x3852c8
void sub_00385260_0x385260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385260_0x385260");
#endif

    switch (ctx->pc) {
        case 0x385260u: goto label_385260;
        case 0x385264u: goto label_385264;
        case 0x385268u: goto label_385268;
        case 0x38526cu: goto label_38526c;
        case 0x385270u: goto label_385270;
        case 0x385274u: goto label_385274;
        case 0x385278u: goto label_385278;
        case 0x38527cu: goto label_38527c;
        case 0x385280u: goto label_385280;
        case 0x385284u: goto label_385284;
        case 0x385288u: goto label_385288;
        case 0x38528cu: goto label_38528c;
        case 0x385290u: goto label_385290;
        case 0x385294u: goto label_385294;
        case 0x385298u: goto label_385298;
        case 0x38529cu: goto label_38529c;
        case 0x3852a0u: goto label_3852a0;
        case 0x3852a4u: goto label_3852a4;
        case 0x3852a8u: goto label_3852a8;
        case 0x3852acu: goto label_3852ac;
        case 0x3852b0u: goto label_3852b0;
        case 0x3852b4u: goto label_3852b4;
        case 0x3852b8u: goto label_3852b8;
        case 0x3852bcu: goto label_3852bc;
        case 0x3852c0u: goto label_3852c0;
        case 0x3852c4u: goto label_3852c4;
        default: break;
    }

    ctx->pc = 0x385260u;

label_385260:
    // 0x385260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x385260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_385264:
    // 0x385264: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x385264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_385268:
    // 0x385268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x385268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38526c:
    // 0x38526c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38526cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_385270:
    // 0x385270: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x385270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_385274:
    // 0x385274: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x385274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_385278:
    // 0x385278: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x385278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38527c:
    // 0x38527c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_385280:
    if (ctx->pc == 0x385280u) {
        ctx->pc = 0x385280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38527Cu;
        // 0x385280: 0xaca20040  sw          $v0, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385284u;
        goto label_385284;
    }
    ctx->pc = 0x38527Cu;
    {
        const bool branch_taken_0x38527c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38527Cu;
        // 0x385280: 0xaca20040  sw          $v0, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38527c) {
            ctx->pc = 0x38528Cu;
            goto label_38528c;
        }
    }
    ctx->pc = 0x385284u;
label_385284:
    // 0x385284: 0x10000006  b           . + 4 + (0x6 << 2)
label_385288:
    if (ctx->pc == 0x385288u) {
        ctx->pc = 0x385288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385284u;
        // 0x385288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38528Cu;
        goto label_38528c;
    }
    ctx->pc = 0x385284u;
    {
        const bool branch_taken_0x385284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385284u;
        // 0x385288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385284) {
            ctx->pc = 0x3852A0u;
            goto label_3852a0;
        }
    }
    ctx->pc = 0x38528Cu;
label_38528c:
    // 0x38528c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38528cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_385290:
    // 0x385290: 0x8c62e99c  lw          $v0, -0x1664($v1)
    ctx->pc = 0x385290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961564)));
label_385294:
    // 0x385294: 0x40f809  jalr        $v0
label_385298:
    if (ctx->pc == 0x385298u) {
        ctx->pc = 0x385298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385294u;
        // 0x385298: 0x8f84bd04  lw          $a0, -0x42FC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38529Cu;
        goto label_38529c;
    }
    ctx->pc = 0x385294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38529Cu);
        ctx->pc = 0x385298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385294u;
        // 0x385298: 0x8f84bd04  lw          $a0, -0x42FC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950148)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385294u, 0x38529Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38529Cu;
label_38529c:
    // 0x38529c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3852a0:
    // 0x3852a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_3852a4:
    if (ctx->pc == 0x3852A4u) {
        ctx->pc = 0x3852A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852A0u;
        // 0x3852a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3852A8u;
        goto label_3852a8;
    }
    ctx->pc = 0x3852A0u;
    {
        const bool branch_taken_0x3852a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3852a0) {
            ctx->pc = 0x3852A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3852A0u;
            // 0x3852a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3852B4u;
            goto label_3852b4;
        }
    }
    ctx->pc = 0x3852A8u;
label_3852a8:
    // 0x3852a8: 0xc0ef2dc  jal         func_3BCB70
label_3852ac:
    if (ctx->pc == 0x3852ACu) {
        ctx->pc = 0x3852ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852A8u;
        // 0x3852ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3852B0u;
        goto label_3852b0;
    }
    ctx->pc = 0x3852A8u;
    SET_GPR_U32(ctx, 31, 0x3852B0u);
    ctx->pc = 0x3852ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3852A8u;
    // 0x3852ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCB70u, 0x3852A8u, 0x3852B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3852B0u;
label_3852b0:
    // 0x3852b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3852b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3852b4:
    // 0x3852b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3852b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3852b8:
    // 0x3852b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3852b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3852bc:
    // 0x3852bc: 0x3e00008  jr          $ra
label_3852c0:
    if (ctx->pc == 0x3852C0u) {
        ctx->pc = 0x3852C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852BCu;
        // 0x3852c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3852C4u;
        goto label_3852c4;
    }
    ctx->pc = 0x3852BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3852C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3852BCu;
        // 0x3852c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3852BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3852C4u;
label_3852c4:
    // 0x3852c4: 0x0  nop
    ctx->pc = 0x3852c4u;
    // NOP
    ctx->pc = 0x3852c8u;
}
