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

// Function: sub_002AA460
// Address: 0x2aa460 - 0x2aa570
void sub_002AA460_0x2aa460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA460_0x2aa460");
#endif

    switch (ctx->pc) {
        case 0x2aa48cu: goto label_2aa48c;
        case 0x2aa4dcu: goto label_2aa4dc;
        case 0x2aa524u: goto label_2aa524;
        case 0x2aa558u: goto label_2aa558;
        default: break;
    }

    ctx->pc = 0x2aa460u;

    // 0x2aa460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa468: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2aa468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2aa46c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aa46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa470: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2aa470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2aa474: 0x10020009  beq         $zero, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AA474u;
    {
        const bool branch_taken_0x2aa474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2aa474) {
            ctx->pc = 0x2AA49Cu;
            goto label_2aa49c;
        }
    }
    ctx->pc = 0x2AA47Cu;
    // 0x2aa47c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2aa47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa480: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2aa480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2aa484: 0xc1233ac  jal         func_48CEB0
    ctx->pc = 0x2AA484u;
    SET_GPR_U32(ctx, 31, 0x2AA48Cu);
    ctx->pc = 0x48CEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CEB0u, 0x2AA484u, 0x2AA48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA48Cu;
label_2aa48c:
    // 0x2aa48c: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x2aa48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x2aa490: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2aa490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2aa494: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AA494u;
    {
        const bool branch_taken_0x2aa494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa494) {
            ctx->pc = 0x2AA4A0u;
            goto label_2aa4a0;
        }
    }
    ctx->pc = 0x2AA49Cu;
label_2aa49c:
    // 0x2aa49c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa4a0:
    // 0x2aa4a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa4a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aa4a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aa4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA4B0u;
    // 0x2aa4b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2aa4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2aa4b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aa4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aa4b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aa4bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2aa4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2aa4c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2aa4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2aa4c4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2aa4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2aa4c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2aa4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa4cc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2aa4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aa4d0: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2aa4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aa4d4: 0xc09d18c  jal         func_274630
    ctx->pc = 0x2AA4D4u;
    SET_GPR_U32(ctx, 31, 0x2AA4DCu);
    ctx->pc = 0x274630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274630u, 0x2AA4D4u, 0x2AA4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA4DCu;
label_2aa4dc:
    // 0x2aa4dc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2aa4dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aa4e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2aa4e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa4e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aa4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa4e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa4e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa4ec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2aa4ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2aa4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA4F8u;
    // 0x2aa4f8: 0x0  nop
    ctx->pc = 0x2aa4f8u;
    // NOP
    // 0x2aa4fc: 0x0  nop
    ctx->pc = 0x2aa4fcu;
    // NOP
    // 0x2aa500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2aa500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2aa504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2aa504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2aa508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aa50c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2aa50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2aa510: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2aa510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2aa514: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2aa514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa518: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2aa518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aa51c: 0xc09d1e4  jal         func_274790
    ctx->pc = 0x2AA51Cu;
    SET_GPR_U32(ctx, 31, 0x2AA524u);
    ctx->pc = 0x274790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274790u, 0x2AA51Cu, 0x2AA524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA524u;
label_2aa524:
    // 0x2aa524: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2aa524u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2aa528: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2aa528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa52c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2aa52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa534: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2aa534u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2aa538: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA540u;
    // 0x2aa540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa548: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2aa548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2aa54c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2aa54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa550: 0xc09d1d8  jal         func_274760
    ctx->pc = 0x2AA550u;
    SET_GPR_U32(ctx, 31, 0x2AA558u);
    ctx->pc = 0x274760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274760u, 0x2AA550u, 0x2AA558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA558u;
label_2aa558:
    // 0x2aa558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa55c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2aa55cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2aa560: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA568u;
    // 0x2aa568: 0x0  nop
    ctx->pc = 0x2aa568u;
    // NOP
    // 0x2aa56c: 0x0  nop
    ctx->pc = 0x2aa56cu;
    // NOP
    ctx->pc = 0x2aa570u;
}
