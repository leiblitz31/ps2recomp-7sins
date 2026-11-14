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

// Function: sub_0045CA80
// Address: 0x45ca80 - 0x45cb30
void sub_0045CA80_0x45ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045CA80_0x45ca80");
#endif

    switch (ctx->pc) {
        case 0x45ca80u: goto label_45ca80;
        case 0x45ca84u: goto label_45ca84;
        case 0x45ca88u: goto label_45ca88;
        case 0x45ca8cu: goto label_45ca8c;
        case 0x45ca90u: goto label_45ca90;
        case 0x45ca94u: goto label_45ca94;
        case 0x45ca98u: goto label_45ca98;
        case 0x45ca9cu: goto label_45ca9c;
        case 0x45caa0u: goto label_45caa0;
        case 0x45caa4u: goto label_45caa4;
        case 0x45caa8u: goto label_45caa8;
        case 0x45caacu: goto label_45caac;
        case 0x45cab0u: goto label_45cab0;
        case 0x45cab4u: goto label_45cab4;
        case 0x45cab8u: goto label_45cab8;
        case 0x45cabcu: goto label_45cabc;
        case 0x45cac0u: goto label_45cac0;
        case 0x45cac4u: goto label_45cac4;
        case 0x45cac8u: goto label_45cac8;
        case 0x45caccu: goto label_45cacc;
        case 0x45cad0u: goto label_45cad0;
        case 0x45cad4u: goto label_45cad4;
        case 0x45cad8u: goto label_45cad8;
        case 0x45cadcu: goto label_45cadc;
        case 0x45cae0u: goto label_45cae0;
        case 0x45cae4u: goto label_45cae4;
        case 0x45cae8u: goto label_45cae8;
        case 0x45caecu: goto label_45caec;
        case 0x45caf0u: goto label_45caf0;
        case 0x45caf4u: goto label_45caf4;
        case 0x45caf8u: goto label_45caf8;
        case 0x45cafcu: goto label_45cafc;
        case 0x45cb00u: goto label_45cb00;
        case 0x45cb04u: goto label_45cb04;
        case 0x45cb08u: goto label_45cb08;
        case 0x45cb0cu: goto label_45cb0c;
        case 0x45cb10u: goto label_45cb10;
        case 0x45cb14u: goto label_45cb14;
        case 0x45cb18u: goto label_45cb18;
        case 0x45cb1cu: goto label_45cb1c;
        case 0x45cb20u: goto label_45cb20;
        case 0x45cb24u: goto label_45cb24;
        case 0x45cb28u: goto label_45cb28;
        case 0x45cb2cu: goto label_45cb2c;
        default: break;
    }

    ctx->pc = 0x45ca80u;

label_45ca80:
    // 0x45ca80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x45ca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_45ca84:
    // 0x45ca84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45ca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_45ca88:
    // 0x45ca88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45ca88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45ca8c:
    // 0x45ca8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45ca8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45ca90:
    // 0x45ca90: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x45ca90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_45ca94:
    // 0x45ca94: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x45ca94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_45ca98:
    // 0x45ca98: 0xc0f0c58  jal         func_3C3160
label_45ca9c:
    if (ctx->pc == 0x45CA9Cu) {
        ctx->pc = 0x45CAA0u;
        goto label_45caa0;
    }
    ctx->pc = 0x45CA98u;
    SET_GPR_U32(ctx, 31, 0x45CAA0u);
    ctx->pc = 0x3C3160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3160u, 0x45CA98u, 0x45CAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45CAA0u;
label_45caa0:
    // 0x45caa0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45caa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45caa4:
    // 0x45caa4: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_45caa8:
    if (ctx->pc == 0x45CAA8u) {
        ctx->pc = 0x45CAACu;
        goto label_45caac;
    }
    ctx->pc = 0x45CAA4u;
    {
        const bool branch_taken_0x45caa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x45caa4) {
            ctx->pc = 0x45CB18u;
            goto label_45cb18;
        }
    }
    ctx->pc = 0x45CAACu;
label_45caac:
    // 0x45caac: 0x26270028  addiu       $a3, $s1, 0x28
    ctx->pc = 0x45caacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_45cab0:
    // 0x45cab0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x45cab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_45cab4:
    // 0x45cab4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x45cab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_45cab8:
    // 0x45cab8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x45cab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_45cabc:
    // 0x45cabc: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x45cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_45cac0:
    // 0x45cac0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x45cac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_45cac4:
    // 0x45cac4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x45cac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_45cac8:
    // 0x45cac8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x45cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_45cacc:
    // 0x45cacc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x45caccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_45cad0:
    // 0x45cad0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x45cad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_45cad4:
    // 0x45cad4: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
label_45cad8:
    if (ctx->pc == 0x45CAD8u) {
        ctx->pc = 0x45CADCu;
        goto label_45cadc;
    }
    ctx->pc = 0x45CAD4u;
    {
        const bool branch_taken_0x45cad4 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x45cad4) {
            ctx->pc = 0x45CAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45cab8;
        }
    }
    ctx->pc = 0x45CADCu;
label_45cadc:
    // 0x45cadc: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x45cadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_45cae0:
    // 0x45cae0: 0x3c034b43  lui         $v1, 0x4B43
    ctx->pc = 0x45cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19267 << 16));
label_45cae4:
    // 0x45cae4: 0x34634150  ori         $v1, $v1, 0x4150
    ctx->pc = 0x45cae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16720);
label_45cae8:
    // 0x45cae8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_45caec:
    if (ctx->pc == 0x45CAECu) {
        ctx->pc = 0x45CAF0u;
        goto label_45caf0;
    }
    ctx->pc = 0x45CAE8u;
    {
        const bool branch_taken_0x45cae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x45cae8) {
            ctx->pc = 0x45CB08u;
            goto label_45cb08;
        }
    }
    ctx->pc = 0x45CAF0u;
label_45caf0:
    // 0x45caf0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x45caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_45caf4:
    // 0x45caf4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x45caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_45caf8:
    // 0x45caf8: 0x40f809  jalr        $v0
label_45cafc:
    if (ctx->pc == 0x45CAFCu) {
        ctx->pc = 0x45CB00u;
        goto label_45cb00;
    }
    ctx->pc = 0x45CAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45CB00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45CAF8u, 0x45CB00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45CB00u;
label_45cb00:
    // 0x45cb00: 0x10000005  b           . + 4 + (0x5 << 2)
label_45cb04:
    if (ctx->pc == 0x45CB04u) {
        ctx->pc = 0x45CB08u;
        goto label_45cb08;
    }
    ctx->pc = 0x45CB00u;
    {
        const bool branch_taken_0x45cb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cb00) {
            ctx->pc = 0x45CB18u;
            goto label_45cb18;
        }
    }
    ctx->pc = 0x45CB08u;
label_45cb08:
    // 0x45cb08: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x45cb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45cb0c:
    // 0x45cb0c: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x45cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_45cb10:
    // 0x45cb10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x45cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_45cb14:
    // 0x45cb14: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x45cb14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
label_45cb18:
    // 0x45cb18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45cb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45cb1c:
    // 0x45cb1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45cb1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45cb20:
    // 0x45cb20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45cb20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45cb24:
    // 0x45cb24: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x45cb24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_45cb28:
    // 0x45cb28: 0x3e00008  jr          $ra
label_45cb2c:
    if (ctx->pc == 0x45CB2Cu) {
        ctx->pc = 0x45CB30u;
        goto label_fallthrough_0x45cb28;
    }
    ctx->pc = 0x45CB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45CB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x45cb28:
    ctx->pc = 0x45CB30u;
}
