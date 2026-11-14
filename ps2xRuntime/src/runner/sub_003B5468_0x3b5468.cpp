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

// Function: sub_003B5468
// Address: 0x3b5468 - 0x3b5508
void sub_003B5468_0x3b5468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5468_0x3b5468");
#endif

    switch (ctx->pc) {
        case 0x3b5498u: goto label_3b5498;
        case 0x3b54a0u: goto label_3b54a0;
        case 0x3b54ccu: goto label_3b54cc;
        case 0x3b54e8u: goto label_3b54e8;
        case 0x3b54f0u: goto label_3b54f0;
        default: break;
    }

    ctx->pc = 0x3b5468u;

    // 0x3b5468: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b5468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b546c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b546cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b5470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b5470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b5474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b5474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5478: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b5478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b547c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3b547cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3b5480: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3B5480u;
    {
        const bool branch_taken_0x3b5480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5480u;
        // 0x3b5484: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5480) {
            ctx->pc = 0x3B54F0u;
            goto label_3b54f0;
        }
    }
    ctx->pc = 0x3B5488u;
    // 0x3b5488: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B5488u;
    {
        const bool branch_taken_0x3b5488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5488) {
            ctx->pc = 0x3B54E0u;
            goto label_3b54e0;
        }
    }
    ctx->pc = 0x3B5490u;
    // 0x3b5490: 0xc0eb816  jal         func_3AE058
    ctx->pc = 0x3B5490u;
    SET_GPR_U32(ctx, 31, 0x3B5498u);
    ctx->pc = 0x3B5494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5490u;
    // 0x3b5494: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE058u, 0x3B5490u, 0x3B5498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5498u;
label_3b5498:
    // 0x3b5498: 0xc0eb9f8  jal         func_3AE7E0
    ctx->pc = 0x3B5498u;
    SET_GPR_U32(ctx, 31, 0x3B54A0u);
    ctx->pc = 0x3AE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE7E0u, 0x3B5498u, 0x3B54A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B54A0u;
label_3b54a0:
    // 0x3b54a0: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x3b54a0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b54a4: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x3b54a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x3b54a8: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x3b54a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x3b54ac: 0x7e060050  sq          $a2, 0x50($s0)
    ctx->pc = 0x3b54acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 6));
    // 0x3b54b0: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x3b54b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3b54b4: 0x7e030060  sq          $v1, 0x60($s0)
    ctx->pc = 0x3b54b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 3));
    // 0x3b54b8: 0x78460020  lq          $a2, 0x20($v0)
    ctx->pc = 0x3b54b8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3b54bc: 0x7e060070  sq          $a2, 0x70($s0)
    ctx->pc = 0x3b54bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 6));
    // 0x3b54c0: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x3b54c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3b54c4: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x3B54C4u;
    SET_GPR_U32(ctx, 31, 0x3B54CCu);
    ctx->pc = 0x3B54C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B54C4u;
    // 0x3b54c8: 0x7e030080  sq          $v1, 0x80($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x3B54C4u, 0x3B54CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B54CCu;
label_3b54cc:
    // 0x3b54cc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b54ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b54d0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3b54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3b54d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3b54d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b54d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B54D8u;
    {
        const bool branch_taken_0x3b54d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B54D8u;
        // 0x3b54dc: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b54d8) {
            ctx->pc = 0x3B54E8u;
            goto label_3b54e8;
        }
    }
    ctx->pc = 0x3B54E0u;
label_3b54e0:
    // 0x3b54e0: 0xc0eb9c4  jal         func_3AE710
    ctx->pc = 0x3B54E0u;
    SET_GPR_U32(ctx, 31, 0x3B54E8u);
    ctx->pc = 0x3B54E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B54E0u;
    // 0x3b54e4: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE710u, 0x3B54E0u, 0x3B54E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B54E8u;
label_3b54e8:
    // 0x3b54e8: 0xc0eb8ec  jal         func_3AE3B0
    ctx->pc = 0x3B54E8u;
    SET_GPR_U32(ctx, 31, 0x3B54F0u);
    ctx->pc = 0x3AE3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE3B0u, 0x3B54E8u, 0x3B54F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B54F0u;
label_3b54f0:
    // 0x3b54f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b54f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b54f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b54f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b54f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b54f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b54fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B54FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B54FCu;
        // 0x3b5500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B54FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5504u;
    // 0x3b5504: 0x0  nop
    ctx->pc = 0x3b5504u;
    // NOP
    ctx->pc = 0x3b5508u;
}
