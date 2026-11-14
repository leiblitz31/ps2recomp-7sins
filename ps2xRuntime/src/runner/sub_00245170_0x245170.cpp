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

// Function: sub_00245170
// Address: 0x245170 - 0x245220
void sub_00245170_0x245170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245170_0x245170");
#endif

    switch (ctx->pc) {
        case 0x2451e0u: goto label_2451e0;
        case 0x245200u: goto label_245200;
        default: break;
    }

    ctx->pc = 0x245170u;

    // 0x245170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x245170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x245174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245178: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x245178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24517c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x24517cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x245180: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245184: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x245184u;
    {
        const bool branch_taken_0x245184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245184) {
            ctx->pc = 0x245200u;
            goto label_245200;
        }
    }
    ctx->pc = 0x24518Cu;
    // 0x24518c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245190: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x245190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x245194: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x245194u;
    {
        const bool branch_taken_0x245194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245194) {
            ctx->pc = 0x2451E0u;
            goto label_2451e0;
        }
    }
    ctx->pc = 0x24519Cu;
    // 0x24519c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24519cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2451a0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2451a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2451a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2451a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2451a8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2451a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2451ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2451acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2451b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2451b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2451b4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2451b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2451b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2451b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2451bc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2451bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2451c0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2451C0u;
    {
        const bool branch_taken_0x2451c0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2451c0) {
            ctx->pc = 0x2451D0u;
            goto label_2451d0;
        }
    }
    ctx->pc = 0x2451C8u;
    // 0x2451c8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2451c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2451cc: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2451ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2451d0:
    // 0x2451d0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2451d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2451d4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2451d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2451d8: 0xc091868  jal         func_2461A0
    ctx->pc = 0x2451D8u;
    SET_GPR_U32(ctx, 31, 0x2451E0u);
    ctx->pc = 0x2461A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2461A0u, 0x2451D8u, 0x2451E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451E0u;
label_2451e0:
    // 0x2451e0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2451e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2451e4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2451e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2451e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2451e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2451ec: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2451ECu;
    {
        const bool branch_taken_0x2451ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2451ec) {
            ctx->pc = 0x245200u;
            goto label_245200;
        }
    }
    ctx->pc = 0x2451F4u;
    // 0x2451f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2451f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2451f8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2451F8u;
    SET_GPR_U32(ctx, 31, 0x245200u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2451F8u, 0x245200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245200u;
label_245200:
    // 0x245200: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245208: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x245208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24520c: 0x3e00008  jr          $ra
    ctx->pc = 0x24520Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24520Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245214u;
    // 0x245214: 0x0  nop
    ctx->pc = 0x245214u;
    // NOP
    // 0x245218: 0x0  nop
    ctx->pc = 0x245218u;
    // NOP
    // 0x24521c: 0x0  nop
    ctx->pc = 0x24521cu;
    // NOP
    ctx->pc = 0x245220u;
}
