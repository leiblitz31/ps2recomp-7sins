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

// Function: sub_0045E440
// Address: 0x45e440 - 0x45e520
void sub_0045E440_0x45e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E440_0x45e440");
#endif

    switch (ctx->pc) {
        case 0x45e4acu: goto label_45e4ac;
        case 0x45e4c4u: goto label_45e4c4;
        case 0x45e4e0u: goto label_45e4e0;
        default: break;
    }

    ctx->pc = 0x45e440u;

    // 0x45e440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x45e440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x45e444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45e444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x45e448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45e44c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45e44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45e450: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x45e450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x45e454: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x45e454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x45e458: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x45e458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45e45c: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x45e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x45e460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x45e460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x45e464: 0xac62009c  sw          $v0, 0x9C($v1)
    ctx->pc = 0x45e464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 2));
    // 0x45e468: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45e468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45e46c: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x45e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x45e470: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45e470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45e474: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45e474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x45e478: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45e478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
    // 0x45e47c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45e480: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45e480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45e484: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45e484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45e488: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x45e488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x45e48c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x45e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45e490: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45e490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45e494: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x45e494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x45e498: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x45e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x45e49c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x45e49cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45e4a0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x45e4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45e4a4: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x45E4A4u;
    SET_GPR_U32(ctx, 31, 0x45E4ACu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x45E4A4u, 0x45E4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E4ACu;
label_45e4ac:
    // 0x45e4ac: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x45e4acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x45e4b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x45e4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e4b4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x45e4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45e4b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x45e4b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e4bc: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x45E4BCu;
    SET_GPR_U32(ctx, 31, 0x45E4C4u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x45E4BCu, 0x45E4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E4C4u;
label_45e4c4:
    // 0x45e4c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x45E4C4u;
    {
        const bool branch_taken_0x45e4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45e4c4) {
            ctx->pc = 0x45E4FCu;
            goto label_45e4fc;
        }
    }
    ctx->pc = 0x45E4CCu;
    // 0x45e4cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45e4d0: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x45e4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x45e4d4: 0x24440056  addiu       $a0, $v0, 0x56
    ctx->pc = 0x45e4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 86));
    // 0x45e4d8: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x45E4D8u;
    SET_GPR_U32(ctx, 31, 0x45E4E0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45E4D8u, 0x45E4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E4E0u;
label_45e4e0:
    // 0x45e4e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45e4e4: 0x24430056  addiu       $v1, $v0, 0x56
    ctx->pc = 0x45e4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 86));
    // 0x45e4e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45e4ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45e4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x45e4f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45e4f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x45E4F4u;
    {
        const bool branch_taken_0x45e4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e4f4) {
            ctx->pc = 0x45E500u;
            goto label_45e500;
        }
    }
    ctx->pc = 0x45E4FCu;
label_45e4fc:
    // 0x45e4fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45e4fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45e500:
    // 0x45e500: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45e500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45e504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45e504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45e508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45e508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45e50c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x45e50cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x45e510: 0x3e00008  jr          $ra
    ctx->pc = 0x45E510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45E510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45E518u;
    // 0x45e518: 0x0  nop
    ctx->pc = 0x45e518u;
    // NOP
    // 0x45e51c: 0x0  nop
    ctx->pc = 0x45e51cu;
    // NOP
    ctx->pc = 0x45e520u;
}
