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

// Function: sub_004788E0
// Address: 0x4788e0 - 0x4789a0
void sub_004788E0_0x4788e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004788E0_0x4788e0");
#endif

    switch (ctx->pc) {
        case 0x478930u: goto label_478930;
        case 0x478944u: goto label_478944;
        case 0x478960u: goto label_478960;
        case 0x478970u: goto label_478970;
        case 0x478984u: goto label_478984;
        default: break;
    }

    ctx->pc = 0x4788e0u;

    // 0x4788e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4788e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4788e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4788e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4788e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4788e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4788ec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x4788ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x4788f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x4788f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x4788f4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4788f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4788f8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x4788f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4788fc: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x4788FCu;
    {
        const bool branch_taken_0x4788fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4788fc) {
            ctx->pc = 0x478984u;
            goto label_478984;
        }
    }
    ctx->pc = 0x478904u;
    // 0x478904: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x478904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x478908: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x478908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47890c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x47890cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x478910: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x478910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x478914: 0x320c3  sra         $a0, $v1, 3
    ctx->pc = 0x478914u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 3));
    // 0x478918: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x478918u;
    {
        const bool branch_taken_0x478918 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x478918) {
            ctx->pc = 0x478928u;
            goto label_478928;
        }
    }
    ctx->pc = 0x478920u;
    // 0x478920: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x478920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x478924: 0x220c3  sra         $a0, $v0, 3
    ctx->pc = 0x478924u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
label_478928:
    // 0x478928: 0xc11e268  jal         func_4789A0
    ctx->pc = 0x478928u;
    SET_GPR_U32(ctx, 31, 0x478930u);
    ctx->pc = 0x4789A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4789A0u, 0x478928u, 0x478930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478930u;
label_478930:
    // 0x478930: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x478930u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x478934: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x478934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x478938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x478938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47893c: 0xc11e2e4  jal         func_478B90
    ctx->pc = 0x47893Cu;
    SET_GPR_U32(ctx, 31, 0x478944u);
    ctx->pc = 0x478B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478B90u, 0x47893Cu, 0x478944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478944u;
label_478944:
    // 0x478944: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x478944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478948: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x478948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47894c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47894cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478950: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x478950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478954: 0x83a8002c  lb          $t0, 0x2C($sp)
    ctx->pc = 0x478954u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x478958: 0xc11e328  jal         func_478CA0
    ctx->pc = 0x478958u;
    SET_GPR_U32(ctx, 31, 0x478960u);
    ctx->pc = 0x478CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478CA0u, 0x478958u, 0x478960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478960u;
label_478960:
    // 0x478960: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x478960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x478964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x478964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478968: 0xc11e2e4  jal         func_478B90
    ctx->pc = 0x478968u;
    SET_GPR_U32(ctx, 31, 0x478970u);
    ctx->pc = 0x478B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478B90u, 0x478968u, 0x478970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478970u;
label_478970:
    // 0x478970: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x478970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478974: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x478974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x478978: 0x83a60028  lb          $a2, 0x28($sp)
    ctx->pc = 0x478978u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x47897c: 0xc11e2f0  jal         func_478BC0
    ctx->pc = 0x47897Cu;
    SET_GPR_U32(ctx, 31, 0x478984u);
    ctx->pc = 0x478BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478BC0u, 0x47897Cu, 0x478984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478984u;
label_478984:
    // 0x478984: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x478984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x478988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47898c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x47898cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x478990: 0x3e00008  jr          $ra
    ctx->pc = 0x478990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478998u;
    // 0x478998: 0x0  nop
    ctx->pc = 0x478998u;
    // NOP
    // 0x47899c: 0x0  nop
    ctx->pc = 0x47899cu;
    // NOP
    ctx->pc = 0x4789a0u;
}
