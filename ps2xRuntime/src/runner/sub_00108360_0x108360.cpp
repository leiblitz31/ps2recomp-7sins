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

// Function: sub_00108360
// Address: 0x108360 - 0x108410
void sub_00108360_0x108360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108360_0x108360");
#endif

    switch (ctx->pc) {
        case 0x1083d0u: goto label_1083d0;
        case 0x1083f0u: goto label_1083f0;
        default: break;
    }

    ctx->pc = 0x108360u;

    // 0x108360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x108364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108368: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x108368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10836c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10836cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x108370: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108374: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x108374u;
    {
        const bool branch_taken_0x108374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108374) {
            ctx->pc = 0x1083F0u;
            goto label_1083f0;
        }
    }
    ctx->pc = 0x10837Cu;
    // 0x10837c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10837cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108380: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x108380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x108384: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x108384u;
    {
        const bool branch_taken_0x108384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108384) {
            ctx->pc = 0x1083D0u;
            goto label_1083d0;
        }
    }
    ctx->pc = 0x10838Cu;
    // 0x10838c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10838cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108390: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x108390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108394: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108398: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x108398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10839c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10839cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1083a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1083a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1083a4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1083a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1083a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1083a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1083ac: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1083acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1083b0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1083B0u;
    {
        const bool branch_taken_0x1083b0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1083b0) {
            ctx->pc = 0x1083C0u;
            goto label_1083c0;
        }
    }
    ctx->pc = 0x1083B8u;
    // 0x1083b8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1083b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1083bc: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1083bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1083c0:
    // 0x1083c0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1083c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1083c4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1083c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1083c8: 0xc042494  jal         func_109250
    ctx->pc = 0x1083C8u;
    SET_GPR_U32(ctx, 31, 0x1083D0u);
    ctx->pc = 0x109250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109250u, 0x1083C8u, 0x1083D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1083D0u;
label_1083d0:
    // 0x1083d0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1083d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1083d4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1083d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1083d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1083d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1083dc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1083DCu;
    {
        const bool branch_taken_0x1083dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1083dc) {
            ctx->pc = 0x1083F0u;
            goto label_1083f0;
        }
    }
    ctx->pc = 0x1083E4u;
    // 0x1083e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1083e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1083e8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1083E8u;
    SET_GPR_U32(ctx, 31, 0x1083F0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1083E8u, 0x1083F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1083F0u;
label_1083f0:
    // 0x1083f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1083f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1083f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1083f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1083f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1083f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1083fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1083FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1083FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108404u;
    // 0x108404: 0x0  nop
    ctx->pc = 0x108404u;
    // NOP
    // 0x108408: 0x0  nop
    ctx->pc = 0x108408u;
    // NOP
    // 0x10840c: 0x0  nop
    ctx->pc = 0x10840cu;
    // NOP
    ctx->pc = 0x108410u;
}
