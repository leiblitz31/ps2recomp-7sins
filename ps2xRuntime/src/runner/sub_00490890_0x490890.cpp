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

// Function: sub_00490890
// Address: 0x490890 - 0x490940
void sub_00490890_0x490890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490890_0x490890");
#endif

    switch (ctx->pc) {
        case 0x490900u: goto label_490900;
        case 0x490920u: goto label_490920;
        default: break;
    }

    ctx->pc = 0x490890u;

    // 0x490890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x490890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x490894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x490894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x490898: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x490898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x49089c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x49089cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x4908a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4908a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4908a4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4908A4u;
    {
        const bool branch_taken_0x4908a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4908a4) {
            ctx->pc = 0x490920u;
            goto label_490920;
        }
    }
    ctx->pc = 0x4908ACu;
    // 0x4908ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4908acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4908b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4908b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4908b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4908B4u;
    {
        const bool branch_taken_0x4908b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4908b4) {
            ctx->pc = 0x490900u;
            goto label_490900;
        }
    }
    ctx->pc = 0x4908BCu;
    // 0x4908bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4908bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4908c0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x4908c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4908c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4908c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4908c8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4908c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4908cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4908ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4908d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4908d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4908d4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4908d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4908d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4908d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4908dc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x4908dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x4908e0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4908E0u;
    {
        const bool branch_taken_0x4908e0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4908e0) {
            ctx->pc = 0x4908F0u;
            goto label_4908f0;
        }
    }
    ctx->pc = 0x4908E8u;
    // 0x4908e8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x4908e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x4908ec: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4908ecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4908f0:
    // 0x4908f0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x4908f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x4908f4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4908f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4908f8: 0xc124c24  jal         func_493090
    ctx->pc = 0x4908F8u;
    SET_GPR_U32(ctx, 31, 0x490900u);
    ctx->pc = 0x493090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493090u, 0x4908F8u, 0x490900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490900u;
label_490900:
    // 0x490900: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x490900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490904: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x490904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x490908: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x490908u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x49090c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49090Cu;
    {
        const bool branch_taken_0x49090c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49090c) {
            ctx->pc = 0x490920u;
            goto label_490920;
        }
    }
    ctx->pc = 0x490914u;
    // 0x490914: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x490914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490918: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x490918u;
    SET_GPR_U32(ctx, 31, 0x490920u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x490918u, 0x490920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490920u;
label_490920:
    // 0x490920: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x490924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490928: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x490928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x49092c: 0x3e00008  jr          $ra
    ctx->pc = 0x49092Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49092Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490934u;
    // 0x490934: 0x0  nop
    ctx->pc = 0x490934u;
    // NOP
    // 0x490938: 0x0  nop
    ctx->pc = 0x490938u;
    // NOP
    // 0x49093c: 0x0  nop
    ctx->pc = 0x49093cu;
    // NOP
    ctx->pc = 0x490940u;
}
