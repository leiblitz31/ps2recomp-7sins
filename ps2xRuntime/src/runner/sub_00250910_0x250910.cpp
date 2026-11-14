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

// Function: sub_00250910
// Address: 0x250910 - 0x2509c0
void sub_00250910_0x250910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250910_0x250910");
#endif

    switch (ctx->pc) {
        case 0x250980u: goto label_250980;
        case 0x2509a0u: goto label_2509a0;
        default: break;
    }

    ctx->pc = 0x250910u;

    // 0x250910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x250914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250918: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x250918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25091c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25091cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x250920: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250924: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x250924u;
    {
        const bool branch_taken_0x250924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250924) {
            ctx->pc = 0x2509A0u;
            goto label_2509a0;
        }
    }
    ctx->pc = 0x25092Cu;
    // 0x25092c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250930: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250934: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x250934u;
    {
        const bool branch_taken_0x250934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250934) {
            ctx->pc = 0x250980u;
            goto label_250980;
        }
    }
    ctx->pc = 0x25093Cu;
    // 0x25093c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25093cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250940: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x250940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250944: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250948: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x250948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25094c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250950: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250954: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x250954u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250958: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x250958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x25095c: 0x33143  sra         $a2, $v1, 5
    ctx->pc = 0x25095cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 5));
    // 0x250960: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x250960u;
    {
        const bool branch_taken_0x250960 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x250960) {
            ctx->pc = 0x250970u;
            goto label_250970;
        }
    }
    ctx->pc = 0x250968u;
    // 0x250968: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x250968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x25096c: 0x23143  sra         $a2, $v0, 5
    ctx->pc = 0x25096cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 5));
label_250970:
    // 0x250970: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x250970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x250974: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x250974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x250978: 0xc094904  jal         func_252410
    ctx->pc = 0x250978u;
    SET_GPR_U32(ctx, 31, 0x250980u);
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x250978u, 0x250980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250980u;
label_250980:
    // 0x250980: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x250980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250984: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x250984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x250988: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x250988u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25098c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25098Cu;
    {
        const bool branch_taken_0x25098c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25098c) {
            ctx->pc = 0x2509A0u;
            goto label_2509a0;
        }
    }
    ctx->pc = 0x250994u;
    // 0x250994: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x250994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250998: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x250998u;
    SET_GPR_U32(ctx, 31, 0x2509A0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x250998u, 0x2509A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2509A0u;
label_2509a0:
    // 0x2509a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2509a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2509a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2509a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2509a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2509a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2509ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2509ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2509ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2509B4u;
    // 0x2509b4: 0x0  nop
    ctx->pc = 0x2509b4u;
    // NOP
    // 0x2509b8: 0x0  nop
    ctx->pc = 0x2509b8u;
    // NOP
    // 0x2509bc: 0x0  nop
    ctx->pc = 0x2509bcu;
    // NOP
    ctx->pc = 0x2509c0u;
}
