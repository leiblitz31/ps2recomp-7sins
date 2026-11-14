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

// Function: sub_001C1360
// Address: 0x1c1360 - 0x1c13f0
void sub_001C1360_0x1c1360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1360_0x1c1360");
#endif

    switch (ctx->pc) {
        case 0x1c138cu: goto label_1c138c;
        case 0x1c13a0u: goto label_1c13a0;
        default: break;
    }

    ctx->pc = 0x1c1360u;

    // 0x1c1360: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c1360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c1364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c1364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c1368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c136c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1370: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1c1370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1c1374: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c1374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1c1378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c137c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1c137cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c1380: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c1380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1384: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C1384u;
    {
        const bool branch_taken_0x1c1384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1384) {
            ctx->pc = 0x1C13C0u;
            goto label_1c13c0;
        }
    }
    ctx->pc = 0x1C138Cu;
label_1c138c:
    // 0x1c138c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c138cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1390: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c1390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c1394: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c1394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1398: 0xc0704fc  jal         func_1C13F0
    ctx->pc = 0x1C1398u;
    SET_GPR_U32(ctx, 31, 0x1C13A0u);
    ctx->pc = 0x1C13F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C13F0u, 0x1C1398u, 0x1C13A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C13A0u;
label_1c13a0:
    // 0x1c13a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c13a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c13a4: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x1c13a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1c13a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c13a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c13ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c13acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c13b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c13b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c13b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c13b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c13b8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1c13b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c13bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c13bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c13c0:
    // 0x1c13c0: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1c13c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c13c4: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1C13C4u;
    {
        const bool branch_taken_0x1c13c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c13c4) {
            ctx->pc = 0x1C138Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c138c;
        }
    }
    ctx->pc = 0x1C13CCu;
    // 0x1c13cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c13ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c13d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c13d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c13d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c13d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c13d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c13d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c13dc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c13dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c13e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C13E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C13E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C13E8u;
    // 0x1c13e8: 0x0  nop
    ctx->pc = 0x1c13e8u;
    // NOP
    // 0x1c13ec: 0x0  nop
    ctx->pc = 0x1c13ecu;
    // NOP
    ctx->pc = 0x1c13f0u;
}
