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

// Function: sub_00472BD0
// Address: 0x472bd0 - 0x472ce0
void sub_00472BD0_0x472bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472BD0_0x472bd0");
#endif

    switch (ctx->pc) {
        case 0x472c50u: goto label_472c50;
        case 0x472c84u: goto label_472c84;
        case 0x472cc0u: goto label_472cc0;
        default: break;
    }

    ctx->pc = 0x472bd0u;

    // 0x472bd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x472bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x472bd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x472bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x472bd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x472bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x472bdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x472bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x472be0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x472be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x472be4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x472be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x472be8: 0xa7a50050  sh          $a1, 0x50($sp)
    ctx->pc = 0x472be8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 5));
    // 0x472bec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x472becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x472bf0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x472BF0u;
    {
        const bool branch_taken_0x472bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472bf0) {
            ctx->pc = 0x472CC0u;
            goto label_472cc0;
        }
    }
    ctx->pc = 0x472BF8u;
    // 0x472bf8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x472bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x472bfc: 0x24636d30  addiu       $v1, $v1, 0x6D30
    ctx->pc = 0x472bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27952));
    // 0x472c00: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x472c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x472c04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x472c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x472c08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x472c08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472c0c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x472c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x472c10: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x472c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x472c14: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x472C14u;
    {
        const bool branch_taken_0x472c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472c14) {
            ctx->pc = 0x472CA0u;
            goto label_472ca0;
        }
    }
    ctx->pc = 0x472C1Cu;
    // 0x472c1c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x472c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x472c20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x472c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x472c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x472c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x472c28: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x472C28u;
    {
        const bool branch_taken_0x472c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x472c28) {
            ctx->pc = 0x472C74u;
            goto label_472c74;
        }
    }
    ctx->pc = 0x472C30u;
    // 0x472c30: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x472C30u;
    {
        const bool branch_taken_0x472c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x472c30) {
            ctx->pc = 0x472C40u;
            goto label_472c40;
        }
    }
    ctx->pc = 0x472C38u;
    // 0x472c38: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x472C38u;
    {
        const bool branch_taken_0x472c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x472c38) {
            ctx->pc = 0x472CA0u;
            goto label_472ca0;
        }
    }
    ctx->pc = 0x472C40u;
label_472c40:
    // 0x472c40: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x472c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x472c44: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x472c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x472c48: 0xc0ee5a4  jal         func_3B9690
    ctx->pc = 0x472C48u;
    SET_GPR_U32(ctx, 31, 0x472C50u);
    ctx->pc = 0x3B9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9690u, 0x472C48u, 0x472C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472C50u;
label_472c50:
    // 0x472c50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x472C50u;
    {
        const bool branch_taken_0x472c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472c50) {
            ctx->pc = 0x472C64u;
            goto label_472c64;
        }
    }
    ctx->pc = 0x472C58u;
    // 0x472c58: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x472c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x472c5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x472C5Cu;
    {
        const bool branch_taken_0x472c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x472c5c) {
            ctx->pc = 0x472C68u;
            goto label_472c68;
        }
    }
    ctx->pc = 0x472C64u;
label_472c64:
    // 0x472c64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x472c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472c68:
    // 0x472c68: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x472c68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472c6c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x472C6Cu;
    {
        const bool branch_taken_0x472c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x472c6c) {
            ctx->pc = 0x472CA0u;
            goto label_472ca0;
        }
    }
    ctx->pc = 0x472C74u;
label_472c74:
    // 0x472c74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x472c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x472c78: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x472c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x472c7c: 0xc0ecf78  jal         func_3B3DE0
    ctx->pc = 0x472C7Cu;
    SET_GPR_U32(ctx, 31, 0x472C84u);
    ctx->pc = 0x3B3DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3DE0u, 0x472C7Cu, 0x472C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472C84u;
label_472c84:
    // 0x472c84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x472C84u;
    {
        const bool branch_taken_0x472c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472c84) {
            ctx->pc = 0x472C98u;
            goto label_472c98;
        }
    }
    ctx->pc = 0x472C8Cu;
    // 0x472c8c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x472c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x472c90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x472C90u;
    {
        const bool branch_taken_0x472c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x472c90) {
            ctx->pc = 0x472C9Cu;
            goto label_472c9c;
        }
    }
    ctx->pc = 0x472C98u;
label_472c98:
    // 0x472c98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x472c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472c9c:
    // 0x472c9c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x472c9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_472ca0:
    // 0x472ca0: 0x87a20050  lh          $v0, 0x50($sp)
    ctx->pc = 0x472ca0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x472ca4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x472ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x472ca8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x472ca8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x472cac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x472CACu;
    {
        const bool branch_taken_0x472cac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x472cac) {
            ctx->pc = 0x472CC0u;
            goto label_472cc0;
        }
    }
    ctx->pc = 0x472CB4u;
    // 0x472cb4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x472cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x472cb8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x472CB8u;
    SET_GPR_U32(ctx, 31, 0x472CC0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x472CB8u, 0x472CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472CC0u;
label_472cc0:
    // 0x472cc0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x472cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x472cc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x472cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x472cc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x472cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x472ccc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x472cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x472cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x472cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x472cd4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x472cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x472cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x472CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x472CE0u;
}
