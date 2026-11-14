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

// Function: sub_004790D0
// Address: 0x4790d0 - 0x4791b0
void sub_004790D0_0x4790d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004790D0_0x4790d0");
#endif

    switch (ctx->pc) {
        case 0x4790f0u: goto label_4790f0;
        case 0x4790fcu: goto label_4790fc;
        case 0x479110u: goto label_479110;
        case 0x47912cu: goto label_47912c;
        case 0x47914cu: goto label_47914c;
        case 0x479184u: goto label_479184;
        default: break;
    }

    ctx->pc = 0x4790d0u;

    // 0x4790d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4790d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4790d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4790d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4790d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4790d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4790dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4790dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4790e0: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x4790e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x4790e4: 0xa3a70040  sb          $a3, 0x40($sp)
    ctx->pc = 0x4790e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 7));
    // 0x4790e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4790E8u;
    {
        const bool branch_taken_0x4790e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4790e8) {
            ctx->pc = 0x4790FCu;
            goto label_4790fc;
        }
    }
    ctx->pc = 0x4790F0u;
label_4790f0:
    // 0x4790f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4790f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4790f4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x4790f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x4790f8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4790f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_4790fc:
    // 0x4790fc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4790fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x479100: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x479100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x479104: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x479104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x479108: 0xc11e3bc  jal         func_478EF0
    ctx->pc = 0x479108u;
    SET_GPR_U32(ctx, 31, 0x479110u);
    ctx->pc = 0x478EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478EF0u, 0x479108u, 0x479110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479110u;
label_479110:
    // 0x479110: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x479110u;
    {
        const bool branch_taken_0x479110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x479110) {
            ctx->pc = 0x4790F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4790f0;
        }
    }
    ctx->pc = 0x479118u;
    // 0x479118: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x479118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47911c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x47911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x479120: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x479120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x479124: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x479124u;
    {
        const bool branch_taken_0x479124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479124) {
            ctx->pc = 0x479138u;
            goto label_479138;
        }
    }
    ctx->pc = 0x47912Cu;
label_47912c:
    // 0x47912c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47912cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479130: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x479130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x479134: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x479134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_479138:
    // 0x479138: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x479138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x47913c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x47913cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x479140: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x479140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479144: 0xc11e3bc  jal         func_478EF0
    ctx->pc = 0x479144u;
    SET_GPR_U32(ctx, 31, 0x47914Cu);
    ctx->pc = 0x478EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478EF0u, 0x479144u, 0x47914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47914Cu;
label_47914c:
    // 0x47914c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x47914Cu;
    {
        const bool branch_taken_0x47914c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47914c) {
            ctx->pc = 0x47912Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47912c;
        }
    }
    ctx->pc = 0x479154u;
    // 0x479154: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x479154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x479158: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x479158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47915c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x47915cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x479160: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x479160u;
    {
        const bool branch_taken_0x479160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x479160) {
            ctx->pc = 0x479174u;
            goto label_479174;
        }
    }
    ctx->pc = 0x479168u;
    // 0x479168: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x479168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47916c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x47916Cu;
    {
        const bool branch_taken_0x47916c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47916c) {
            ctx->pc = 0x479198u;
            goto label_479198;
        }
    }
    ctx->pc = 0x479174u;
label_479174:
    // 0x479174: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x479174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x479178: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x479178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47917c: 0xc11e46c  jal         func_4791B0
    ctx->pc = 0x47917Cu;
    SET_GPR_U32(ctx, 31, 0x479184u);
    ctx->pc = 0x4791B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4791B0u, 0x47917Cu, 0x479184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479184u;
label_479184:
    // 0x479184: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x479184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x479188: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x479188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x47918c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x47918cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x479190: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x479190u;
    {
        const bool branch_taken_0x479190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479190) {
            ctx->pc = 0x4790FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4790fc;
        }
    }
    ctx->pc = 0x479198u;
label_479198:
    // 0x479198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x479198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47919c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x47919cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4791a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4791A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4791A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4791A8u;
    // 0x4791a8: 0x0  nop
    ctx->pc = 0x4791a8u;
    // NOP
    // 0x4791ac: 0x0  nop
    ctx->pc = 0x4791acu;
    // NOP
    ctx->pc = 0x4791b0u;
}
