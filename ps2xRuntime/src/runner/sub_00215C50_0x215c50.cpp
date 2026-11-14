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

// Function: sub_00215C50
// Address: 0x215c50 - 0x215e60
void sub_00215C50_0x215c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215C50_0x215c50");
#endif

    switch (ctx->pc) {
        case 0x215c94u: goto label_215c94;
        default: break;
    }

    ctx->pc = 0x215c50u;

    // 0x215c50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x215c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x215c54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x215c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x215c58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x215c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x215c5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x215c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x215c60: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x215c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x215c64: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x215c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215c68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215c6c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x215c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215c70: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x215c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215c74: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x215c74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x215c78: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x215C78u;
    {
        const bool branch_taken_0x215c78 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x215c78) {
            ctx->pc = 0x215C88u;
            goto label_215c88;
        }
    }
    ctx->pc = 0x215C80u;
    // 0x215c80: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x215c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x215c84: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x215c84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_215c88:
    // 0x215c88: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x215c88u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x215c8c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x215C8Cu;
    {
        const bool branch_taken_0x215c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215c8c) {
            ctx->pc = 0x215D58u;
            goto label_215d58;
        }
    }
    ctx->pc = 0x215C94u;
label_215c94:
    // 0x215c94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215c98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x215c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215c9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x215c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215ca0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x215ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215ca4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215CA4u;
    {
        const bool branch_taken_0x215ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215ca4) {
            ctx->pc = 0x215CB8u;
            goto label_215cb8;
        }
    }
    ctx->pc = 0x215CACu;
    // 0x215cac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215cb0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x215CB0u;
    {
        const bool branch_taken_0x215cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215cb0) {
            ctx->pc = 0x215E4Cu;
            goto label_215e4c;
        }
    }
    ctx->pc = 0x215CB8u;
label_215cb8:
    // 0x215cb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215cbc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x215cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x215cc0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x215cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x215cc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215cc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x215cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215ccc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x215cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215cd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x215cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215cd4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215CD4u;
    {
        const bool branch_taken_0x215cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215cd4) {
            ctx->pc = 0x215CE8u;
            goto label_215ce8;
        }
    }
    ctx->pc = 0x215CDCu;
    // 0x215cdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215ce0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x215CE0u;
    {
        const bool branch_taken_0x215ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215ce0) {
            ctx->pc = 0x215E4Cu;
            goto label_215e4c;
        }
    }
    ctx->pc = 0x215CE8u;
label_215ce8:
    // 0x215ce8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215cec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x215cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x215cf0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x215cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x215cf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215cf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x215cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215cfc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x215cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215d00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x215d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215d04: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215D04u;
    {
        const bool branch_taken_0x215d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215d04) {
            ctx->pc = 0x215D18u;
            goto label_215d18;
        }
    }
    ctx->pc = 0x215D0Cu;
    // 0x215d0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215d10: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x215D10u;
    {
        const bool branch_taken_0x215d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215d10) {
            ctx->pc = 0x215E4Cu;
            goto label_215e4c;
        }
    }
    ctx->pc = 0x215D18u;
label_215d18:
    // 0x215d18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215d1c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x215d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x215d20: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x215d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x215d24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215d28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x215d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215d2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x215d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215d30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x215d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215d34: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215D34u;
    {
        const bool branch_taken_0x215d34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215d34) {
            ctx->pc = 0x215D48u;
            goto label_215d48;
        }
    }
    ctx->pc = 0x215D3Cu;
    // 0x215d3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215d40: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x215D40u;
    {
        const bool branch_taken_0x215d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215d40) {
            ctx->pc = 0x215E4Cu;
            goto label_215e4c;
        }
    }
    ctx->pc = 0x215D48u;
label_215d48:
    // 0x215d48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215d4c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x215d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x215d50: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x215d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x215d54: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x215d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_215d58:
    // 0x215d58: 0x1e00ffce  bgtz        $s0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x215D58u;
    {
        const bool branch_taken_0x215d58 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x215d58) {
            ctx->pc = 0x215C94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215c94;
        }
    }
    ctx->pc = 0x215D60u;
    // 0x215d60: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x215d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215d64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215d68: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x215d68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215d6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x215d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215d70: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x215d70u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x215d74: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215D74u;
    {
        const bool branch_taken_0x215d74 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x215d74) {
            ctx->pc = 0x215D84u;
            goto label_215d84;
        }
    }
    ctx->pc = 0x215D7Cu;
    // 0x215d7c: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x215d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x215d80: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x215d80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_215d84:
    // 0x215d84: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x215D84u;
    {
        const bool branch_taken_0x215d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x215d84) {
            ctx->pc = 0x215E48u;
            goto label_215e48;
        }
    }
    ctx->pc = 0x215D8Cu;
    // 0x215d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215d90: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x215D90u;
    {
        const bool branch_taken_0x215d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x215d90) {
            ctx->pc = 0x215E18u;
            goto label_215e18;
        }
    }
    ctx->pc = 0x215D98u;
    // 0x215d98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x215d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x215d9c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x215D9Cu;
    {
        const bool branch_taken_0x215d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x215d9c) {
            ctx->pc = 0x215DE8u;
            goto label_215de8;
        }
    }
    ctx->pc = 0x215DA4u;
    // 0x215da4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x215da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x215da8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215DA8u;
    {
        const bool branch_taken_0x215da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x215da8) {
            ctx->pc = 0x215DB8u;
            goto label_215db8;
        }
    }
    ctx->pc = 0x215DB0u;
    // 0x215db0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x215DB0u;
    {
        const bool branch_taken_0x215db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215db0) {
            ctx->pc = 0x215E48u;
            goto label_215e48;
        }
    }
    ctx->pc = 0x215DB8u;
label_215db8:
    // 0x215db8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215dbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x215dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215dc0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x215dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215dc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x215dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215dc8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215DC8u;
    {
        const bool branch_taken_0x215dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215dc8) {
            ctx->pc = 0x215DDCu;
            goto label_215ddc;
        }
    }
    ctx->pc = 0x215DD0u;
    // 0x215dd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215dd4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x215DD4u;
    {
        const bool branch_taken_0x215dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215dd4) {
            ctx->pc = 0x215E4Cu;
            goto label_215e4c;
        }
    }
    ctx->pc = 0x215DDCu;
label_215ddc:
    // 0x215ddc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215de0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x215de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x215de4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x215de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_215de8:
    // 0x215de8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215dec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x215decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215df0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x215df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215df4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x215df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215df8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215DF8u;
    {
        const bool branch_taken_0x215df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215df8) {
            ctx->pc = 0x215E0Cu;
            goto label_215e0c;
        }
    }
    ctx->pc = 0x215E00u;
    // 0x215e00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215e04: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x215E04u;
    {
        const bool branch_taken_0x215e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215e04) {
            ctx->pc = 0x215E4Cu;
            goto label_215e4c;
        }
    }
    ctx->pc = 0x215E0Cu;
label_215e0c:
    // 0x215e0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215e10: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x215e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x215e14: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x215e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_215e18:
    // 0x215e18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215e1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x215e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215e20: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x215e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215e24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x215e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215e28: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215E28u;
    {
        const bool branch_taken_0x215e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215e28) {
            ctx->pc = 0x215E3Cu;
            goto label_215e3c;
        }
    }
    ctx->pc = 0x215E30u;
    // 0x215e30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215e34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x215E34u;
    {
        const bool branch_taken_0x215e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215e34) {
            ctx->pc = 0x215E4Cu;
            goto label_215e4c;
        }
    }
    ctx->pc = 0x215E3Cu;
label_215e3c:
    // 0x215e3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215e40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x215e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x215e44: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x215e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_215e48:
    // 0x215e48: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x215e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_215e4c:
    // 0x215e4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x215e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215e50: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x215e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x215e54: 0x3e00008  jr          $ra
    ctx->pc = 0x215E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215E5Cu;
    // 0x215e5c: 0x0  nop
    ctx->pc = 0x215e5cu;
    // NOP
    ctx->pc = 0x215e60u;
}
