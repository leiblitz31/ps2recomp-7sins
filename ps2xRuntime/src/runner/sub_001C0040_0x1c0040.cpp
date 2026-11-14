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

// Function: sub_001C0040
// Address: 0x1c0040 - 0x1c0100
void sub_001C0040_0x1c0040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0040_0x1c0040");
#endif

    switch (ctx->pc) {
        case 0x1c0084u: goto label_1c0084;
        case 0x1c0090u: goto label_1c0090;
        default: break;
    }

    ctx->pc = 0x1c0040u;

    // 0x1c0040: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c0040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c0044: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c0044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c0048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c0048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c004c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c004cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0050: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c0050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1c0054: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1c0054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1c0058: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c0058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c005c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C005Cu;
    {
        const bool branch_taken_0x1c005c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c005c) {
            ctx->pc = 0x1C00E8u;
            goto label_1c00e8;
        }
    }
    ctx->pc = 0x1C0064u;
    // 0x1c0064: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c0064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c0068: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1c0068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1c006c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1c006cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1c0070: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c0070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c0074: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x1c0074u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c0078: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c0078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c007c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1C007Cu;
    {
        const bool branch_taken_0x1c007c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c007c) {
            ctx->pc = 0x1C00DCu;
            goto label_1c00dc;
        }
    }
    ctx->pc = 0x1C0084u;
label_1c0084:
    // 0x1c0084: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c0084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0088: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C0088u;
    {
        const bool branch_taken_0x1c0088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0088) {
            ctx->pc = 0x1C00CCu;
            goto label_1c00cc;
        }
    }
    ctx->pc = 0x1C0090u;
label_1c0090:
    // 0x1c0090: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1c0090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1c0094: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c0094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c0098: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1c0098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c009c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c009cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c00a0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1c00a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c00a4: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1c00a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c00a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c00a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c00ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c00acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c00b0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c00b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c00b4: 0x24720010  addiu       $s2, $v1, 0x10
    ctx->pc = 0x1c00b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1c00b8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1c00b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c00bc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1c00bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1c00c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1c00c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1c00c4: 0xa6430006  sh          $v1, 0x6($s2)
    ctx->pc = 0x1c00c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c00c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c00c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c00cc:
    // 0x1c00cc: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1c00ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c00d0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1C00D0u;
    {
        const bool branch_taken_0x1c00d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c00d0) {
            ctx->pc = 0x1C0090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0090;
        }
    }
    ctx->pc = 0x1C00D8u;
    // 0x1c00d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c00d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c00dc:
    // 0x1c00dc: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1c00dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c00e0: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1C00E0u;
    {
        const bool branch_taken_0x1c00e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c00e0) {
            ctx->pc = 0x1C0084u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0084;
        }
    }
    ctx->pc = 0x1C00E8u;
label_1c00e8:
    // 0x1c00e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c00e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c00ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c00ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c00f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c00f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c00f4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1c00f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c00f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C00F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C00F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0100u;
}
