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

// Function: sub_00165B80
// Address: 0x165b80 - 0x165c30
void sub_00165B80_0x165b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165B80_0x165b80");
#endif

    switch (ctx->pc) {
        case 0x165b9cu: goto label_165b9c;
        case 0x165bfcu: goto label_165bfc;
        case 0x165c1cu: goto label_165c1c;
        default: break;
    }

    ctx->pc = 0x165b80u;

    // 0x165b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x165b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165b88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x165b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x165b8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x165b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b94: 0xc0557e8  jal         func_155FA0
    ctx->pc = 0x165B94u;
    SET_GPR_U32(ctx, 31, 0x165B9Cu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x165B94u, 0x165B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165B9Cu;
label_165b9c:
    // 0x165b9c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x165b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x165ba0: 0x24633b70  addiu       $v1, $v1, 0x3B70
    ctx->pc = 0x165ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15216));
    // 0x165ba4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165ba8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x165ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x165bac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165bb4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x165bb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x165bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x165BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165BC0u;
    // 0x165bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165bc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x165bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x165bcc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x165bccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x165bd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165bd4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x165BD4u;
    {
        const bool branch_taken_0x165bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165bd4) {
            ctx->pc = 0x165C1Cu;
            goto label_165c1c;
        }
    }
    ctx->pc = 0x165BDCu;
    // 0x165bdc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x165bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x165be0: 0x24633b70  addiu       $v1, $v1, 0x3B70
    ctx->pc = 0x165be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15216));
    // 0x165be4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165be8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x165be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x165bec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x165becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165bf4: 0xc055950  jal         func_156540
    ctx->pc = 0x165BF4u;
    SET_GPR_U32(ctx, 31, 0x165BFCu);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x165BF4u, 0x165BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165BFCu;
label_165bfc:
    // 0x165bfc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x165bfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165c00: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x165c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x165c04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x165c04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x165c08: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165C08u;
    {
        const bool branch_taken_0x165c08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x165c08) {
            ctx->pc = 0x165C1Cu;
            goto label_165c1c;
        }
    }
    ctx->pc = 0x165C10u;
    // 0x165c10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x165c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165c14: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x165C14u;
    SET_GPR_U32(ctx, 31, 0x165C1Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x165C14u, 0x165C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C1Cu;
label_165c1c:
    // 0x165c1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x165c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165c20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165c24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x165c24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x165c28: 0x3e00008  jr          $ra
    ctx->pc = 0x165C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165C30u;
}
