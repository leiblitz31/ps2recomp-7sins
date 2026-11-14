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

// Function: sub_001331A0
// Address: 0x1331a0 - 0x133270
void sub_001331A0_0x1331a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001331A0_0x1331a0");
#endif

    switch (ctx->pc) {
        case 0x1331c8u: goto label_1331c8;
        case 0x1331e0u: goto label_1331e0;
        case 0x133200u: goto label_133200;
        case 0x133214u: goto label_133214;
        case 0x133228u: goto label_133228;
        case 0x133238u: goto label_133238;
        case 0x133254u: goto label_133254;
        default: break;
    }

    ctx->pc = 0x1331a0u;

    // 0x1331a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1331a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1331a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1331a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1331a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1331a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1331ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1331acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1331b0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1331b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1331b4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1331b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1331b8: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1331b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1331bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1331bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1331c0: 0xc04cc18  jal         func_133060
    ctx->pc = 0x1331C0u;
    SET_GPR_U32(ctx, 31, 0x1331C8u);
    ctx->pc = 0x133060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133060u, 0x1331C0u, 0x1331C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331C8u;
label_1331c8:
    // 0x1331c8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1331c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1331cc: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1331CCu;
    {
        const bool branch_taken_0x1331cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1331cc) {
            ctx->pc = 0x13321Cu;
            goto label_13321c;
        }
    }
    ctx->pc = 0x1331D4u;
    // 0x1331d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1331d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1331d8: 0xc04cc10  jal         func_133040
    ctx->pc = 0x1331D8u;
    SET_GPR_U32(ctx, 31, 0x1331E0u);
    ctx->pc = 0x133040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133040u, 0x1331D8u, 0x1331E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331E0u;
label_1331e0:
    // 0x1331e0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1331e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1331e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1331e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1331e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1331e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1331ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1331ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1331f0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1331f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1331f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1331f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1331f8: 0xc04cd38  jal         func_1334E0
    ctx->pc = 0x1331F8u;
    SET_GPR_U32(ctx, 31, 0x133200u);
    ctx->pc = 0x1334E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334E0u, 0x1331F8u, 0x133200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133200u;
label_133200:
    // 0x133200: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x133200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133208: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x133208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13320c: 0xc04ccac  jal         func_1332B0
    ctx->pc = 0x13320Cu;
    SET_GPR_U32(ctx, 31, 0x133214u);
    ctx->pc = 0x1332B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332B0u, 0x13320Cu, 0x133214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133214u;
label_133214:
    // 0x133214: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x133214u;
    {
        const bool branch_taken_0x133214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133214) {
            ctx->pc = 0x133254u;
            goto label_133254;
        }
    }
    ctx->pc = 0x13321Cu;
label_13321c:
    // 0x13321c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13321cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133220: 0xc04cd38  jal         func_1334E0
    ctx->pc = 0x133220u;
    SET_GPR_U32(ctx, 31, 0x133228u);
    ctx->pc = 0x1334E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334E0u, 0x133220u, 0x133228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133228u;
label_133228:
    // 0x133228: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x133228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13322c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13322cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133230: 0xc04cc18  jal         func_133060
    ctx->pc = 0x133230u;
    SET_GPR_U32(ctx, 31, 0x133238u);
    ctx->pc = 0x133060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133060u, 0x133230u, 0x133238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133238u;
label_133238:
    // 0x133238: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x133238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13323c: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x13323cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x133240: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x133240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133248: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x133248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13324c: 0xc04cc9c  jal         func_133270
    ctx->pc = 0x13324Cu;
    SET_GPR_U32(ctx, 31, 0x133254u);
    ctx->pc = 0x133270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133270u, 0x13324Cu, 0x133254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133254u;
label_133254:
    // 0x133254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13325c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13325cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x133260: 0x3e00008  jr          $ra
    ctx->pc = 0x133260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133268u;
    // 0x133268: 0x0  nop
    ctx->pc = 0x133268u;
    // NOP
    // 0x13326c: 0x0  nop
    ctx->pc = 0x13326cu;
    // NOP
    ctx->pc = 0x133270u;
}
