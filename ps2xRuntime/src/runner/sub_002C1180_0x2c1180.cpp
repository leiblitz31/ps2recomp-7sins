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

// Function: sub_002C1180
// Address: 0x2c1180 - 0x2c1230
void sub_002C1180_0x2c1180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1180_0x2c1180");
#endif

    switch (ctx->pc) {
        case 0x2c11f0u: goto label_2c11f0;
        case 0x2c1210u: goto label_2c1210;
        default: break;
    }

    ctx->pc = 0x2c1180u;

    // 0x2c1180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c1180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c1184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1188: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c1188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c118c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2c118cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2c1190: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c1190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1194: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C1194u;
    {
        const bool branch_taken_0x2c1194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1194) {
            ctx->pc = 0x2C1210u;
            goto label_2c1210;
        }
    }
    ctx->pc = 0x2C119Cu;
    // 0x2c119c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c119cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c11a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c11a4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C11A4u;
    {
        const bool branch_taken_0x2c11a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c11a4) {
            ctx->pc = 0x2C11F0u;
            goto label_2c11f0;
        }
    }
    ctx->pc = 0x2C11ACu;
    // 0x2c11ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c11acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c11b0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2c11b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c11b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c11b8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2c11b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c11bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c11bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c11c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c11c4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2c11c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c11c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c11cc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2c11ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2c11d0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C11D0u;
    {
        const bool branch_taken_0x2c11d0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2c11d0) {
            ctx->pc = 0x2C11E0u;
            goto label_2c11e0;
        }
    }
    ctx->pc = 0x2C11D8u;
    // 0x2c11d8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2c11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2c11dc: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2c11dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2c11e0:
    // 0x2c11e0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2c11e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2c11e4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2c11e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c11e8: 0xc0b29ec  jal         func_2CA7B0
    ctx->pc = 0x2C11E8u;
    SET_GPR_U32(ctx, 31, 0x2C11F0u);
    ctx->pc = 0x2CA7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA7B0u, 0x2C11E8u, 0x2C11F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C11F0u;
label_2c11f0:
    // 0x2c11f0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2c11f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c11f4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c11f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c11f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c11f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c11fc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C11FCu;
    {
        const bool branch_taken_0x2c11fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c11fc) {
            ctx->pc = 0x2C1210u;
            goto label_2c1210;
        }
    }
    ctx->pc = 0x2C1204u;
    // 0x2c1204: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c1204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1208: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2C1208u;
    SET_GPR_U32(ctx, 31, 0x2C1210u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2C1208u, 0x2C1210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1210u;
label_2c1210:
    // 0x2c1210: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c1210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1218: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2c1218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c121c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C121Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C121Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1224u;
    // 0x2c1224: 0x0  nop
    ctx->pc = 0x2c1224u;
    // NOP
    // 0x2c1228: 0x0  nop
    ctx->pc = 0x2c1228u;
    // NOP
    // 0x2c122c: 0x0  nop
    ctx->pc = 0x2c122cu;
    // NOP
    ctx->pc = 0x2c1230u;
}
