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

// Function: sub_00468AC0
// Address: 0x468ac0 - 0x468e70
void sub_00468AC0_0x468ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00468AC0_0x468ac0");
#endif

    switch (ctx->pc) {
        case 0x468ac0u: goto label_468ac0;
        case 0x468ac4u: goto label_468ac4;
        case 0x468ac8u: goto label_468ac8;
        case 0x468accu: goto label_468acc;
        case 0x468ad0u: goto label_468ad0;
        case 0x468ad4u: goto label_468ad4;
        case 0x468ad8u: goto label_468ad8;
        case 0x468adcu: goto label_468adc;
        case 0x468ae0u: goto label_468ae0;
        case 0x468ae4u: goto label_468ae4;
        case 0x468ae8u: goto label_468ae8;
        case 0x468aecu: goto label_468aec;
        case 0x468af0u: goto label_468af0;
        case 0x468af4u: goto label_468af4;
        case 0x468af8u: goto label_468af8;
        case 0x468afcu: goto label_468afc;
        case 0x468b00u: goto label_468b00;
        case 0x468b04u: goto label_468b04;
        case 0x468b08u: goto label_468b08;
        case 0x468b0cu: goto label_468b0c;
        case 0x468b10u: goto label_468b10;
        case 0x468b14u: goto label_468b14;
        case 0x468b18u: goto label_468b18;
        case 0x468b1cu: goto label_468b1c;
        case 0x468b20u: goto label_468b20;
        case 0x468b24u: goto label_468b24;
        case 0x468b28u: goto label_468b28;
        case 0x468b2cu: goto label_468b2c;
        case 0x468b30u: goto label_468b30;
        case 0x468b34u: goto label_468b34;
        case 0x468b38u: goto label_468b38;
        case 0x468b3cu: goto label_468b3c;
        case 0x468b40u: goto label_468b40;
        case 0x468b44u: goto label_468b44;
        case 0x468b48u: goto label_468b48;
        case 0x468b4cu: goto label_468b4c;
        case 0x468b50u: goto label_468b50;
        case 0x468b54u: goto label_468b54;
        case 0x468b58u: goto label_468b58;
        case 0x468b5cu: goto label_468b5c;
        case 0x468b60u: goto label_468b60;
        case 0x468b64u: goto label_468b64;
        case 0x468b68u: goto label_468b68;
        case 0x468b6cu: goto label_468b6c;
        case 0x468b70u: goto label_468b70;
        case 0x468b74u: goto label_468b74;
        case 0x468b78u: goto label_468b78;
        case 0x468b7cu: goto label_468b7c;
        case 0x468b80u: goto label_468b80;
        case 0x468b84u: goto label_468b84;
        case 0x468b88u: goto label_468b88;
        case 0x468b8cu: goto label_468b8c;
        case 0x468b90u: goto label_468b90;
        case 0x468b94u: goto label_468b94;
        case 0x468b98u: goto label_468b98;
        case 0x468b9cu: goto label_468b9c;
        case 0x468ba0u: goto label_468ba0;
        case 0x468ba4u: goto label_468ba4;
        case 0x468ba8u: goto label_468ba8;
        case 0x468bacu: goto label_468bac;
        case 0x468bb0u: goto label_468bb0;
        case 0x468bb4u: goto label_468bb4;
        case 0x468bb8u: goto label_468bb8;
        case 0x468bbcu: goto label_468bbc;
        case 0x468bc0u: goto label_468bc0;
        case 0x468bc4u: goto label_468bc4;
        case 0x468bc8u: goto label_468bc8;
        case 0x468bccu: goto label_468bcc;
        case 0x468bd0u: goto label_468bd0;
        case 0x468bd4u: goto label_468bd4;
        case 0x468bd8u: goto label_468bd8;
        case 0x468bdcu: goto label_468bdc;
        case 0x468be0u: goto label_468be0;
        case 0x468be4u: goto label_468be4;
        case 0x468be8u: goto label_468be8;
        case 0x468becu: goto label_468bec;
        case 0x468bf0u: goto label_468bf0;
        case 0x468bf4u: goto label_468bf4;
        case 0x468bf8u: goto label_468bf8;
        case 0x468bfcu: goto label_468bfc;
        case 0x468c00u: goto label_468c00;
        case 0x468c04u: goto label_468c04;
        case 0x468c08u: goto label_468c08;
        case 0x468c0cu: goto label_468c0c;
        case 0x468c10u: goto label_468c10;
        case 0x468c14u: goto label_468c14;
        case 0x468c18u: goto label_468c18;
        case 0x468c1cu: goto label_468c1c;
        case 0x468c20u: goto label_468c20;
        case 0x468c24u: goto label_468c24;
        case 0x468c28u: goto label_468c28;
        case 0x468c2cu: goto label_468c2c;
        case 0x468c30u: goto label_468c30;
        case 0x468c34u: goto label_468c34;
        case 0x468c38u: goto label_468c38;
        case 0x468c3cu: goto label_468c3c;
        case 0x468c40u: goto label_468c40;
        case 0x468c44u: goto label_468c44;
        case 0x468c48u: goto label_468c48;
        case 0x468c4cu: goto label_468c4c;
        case 0x468c50u: goto label_468c50;
        case 0x468c54u: goto label_468c54;
        case 0x468c58u: goto label_468c58;
        case 0x468c5cu: goto label_468c5c;
        case 0x468c60u: goto label_468c60;
        case 0x468c64u: goto label_468c64;
        case 0x468c68u: goto label_468c68;
        case 0x468c6cu: goto label_468c6c;
        case 0x468c70u: goto label_468c70;
        case 0x468c74u: goto label_468c74;
        case 0x468c78u: goto label_468c78;
        case 0x468c7cu: goto label_468c7c;
        case 0x468c80u: goto label_468c80;
        case 0x468c84u: goto label_468c84;
        case 0x468c88u: goto label_468c88;
        case 0x468c8cu: goto label_468c8c;
        case 0x468c90u: goto label_468c90;
        case 0x468c94u: goto label_468c94;
        case 0x468c98u: goto label_468c98;
        case 0x468c9cu: goto label_468c9c;
        case 0x468ca0u: goto label_468ca0;
        case 0x468ca4u: goto label_468ca4;
        case 0x468ca8u: goto label_468ca8;
        case 0x468cacu: goto label_468cac;
        case 0x468cb0u: goto label_468cb0;
        case 0x468cb4u: goto label_468cb4;
        case 0x468cb8u: goto label_468cb8;
        case 0x468cbcu: goto label_468cbc;
        case 0x468cc0u: goto label_468cc0;
        case 0x468cc4u: goto label_468cc4;
        case 0x468cc8u: goto label_468cc8;
        case 0x468cccu: goto label_468ccc;
        case 0x468cd0u: goto label_468cd0;
        case 0x468cd4u: goto label_468cd4;
        case 0x468cd8u: goto label_468cd8;
        case 0x468cdcu: goto label_468cdc;
        case 0x468ce0u: goto label_468ce0;
        case 0x468ce4u: goto label_468ce4;
        case 0x468ce8u: goto label_468ce8;
        case 0x468cecu: goto label_468cec;
        case 0x468cf0u: goto label_468cf0;
        case 0x468cf4u: goto label_468cf4;
        case 0x468cf8u: goto label_468cf8;
        case 0x468cfcu: goto label_468cfc;
        case 0x468d00u: goto label_468d00;
        case 0x468d04u: goto label_468d04;
        case 0x468d08u: goto label_468d08;
        case 0x468d0cu: goto label_468d0c;
        case 0x468d10u: goto label_468d10;
        case 0x468d14u: goto label_468d14;
        case 0x468d18u: goto label_468d18;
        case 0x468d1cu: goto label_468d1c;
        case 0x468d20u: goto label_468d20;
        case 0x468d24u: goto label_468d24;
        case 0x468d28u: goto label_468d28;
        case 0x468d2cu: goto label_468d2c;
        case 0x468d30u: goto label_468d30;
        case 0x468d34u: goto label_468d34;
        case 0x468d38u: goto label_468d38;
        case 0x468d3cu: goto label_468d3c;
        case 0x468d40u: goto label_468d40;
        case 0x468d44u: goto label_468d44;
        case 0x468d48u: goto label_468d48;
        case 0x468d4cu: goto label_468d4c;
        case 0x468d50u: goto label_468d50;
        case 0x468d54u: goto label_468d54;
        case 0x468d58u: goto label_468d58;
        case 0x468d5cu: goto label_468d5c;
        case 0x468d60u: goto label_468d60;
        case 0x468d64u: goto label_468d64;
        case 0x468d68u: goto label_468d68;
        case 0x468d6cu: goto label_468d6c;
        case 0x468d70u: goto label_468d70;
        case 0x468d74u: goto label_468d74;
        case 0x468d78u: goto label_468d78;
        case 0x468d7cu: goto label_468d7c;
        case 0x468d80u: goto label_468d80;
        case 0x468d84u: goto label_468d84;
        case 0x468d88u: goto label_468d88;
        case 0x468d8cu: goto label_468d8c;
        case 0x468d90u: goto label_468d90;
        case 0x468d94u: goto label_468d94;
        case 0x468d98u: goto label_468d98;
        case 0x468d9cu: goto label_468d9c;
        case 0x468da0u: goto label_468da0;
        case 0x468da4u: goto label_468da4;
        case 0x468da8u: goto label_468da8;
        case 0x468dacu: goto label_468dac;
        case 0x468db0u: goto label_468db0;
        case 0x468db4u: goto label_468db4;
        case 0x468db8u: goto label_468db8;
        case 0x468dbcu: goto label_468dbc;
        case 0x468dc0u: goto label_468dc0;
        case 0x468dc4u: goto label_468dc4;
        case 0x468dc8u: goto label_468dc8;
        case 0x468dccu: goto label_468dcc;
        case 0x468dd0u: goto label_468dd0;
        case 0x468dd4u: goto label_468dd4;
        case 0x468dd8u: goto label_468dd8;
        case 0x468ddcu: goto label_468ddc;
        case 0x468de0u: goto label_468de0;
        case 0x468de4u: goto label_468de4;
        case 0x468de8u: goto label_468de8;
        case 0x468decu: goto label_468dec;
        case 0x468df0u: goto label_468df0;
        case 0x468df4u: goto label_468df4;
        case 0x468df8u: goto label_468df8;
        case 0x468dfcu: goto label_468dfc;
        case 0x468e00u: goto label_468e00;
        case 0x468e04u: goto label_468e04;
        case 0x468e08u: goto label_468e08;
        case 0x468e0cu: goto label_468e0c;
        case 0x468e10u: goto label_468e10;
        case 0x468e14u: goto label_468e14;
        case 0x468e18u: goto label_468e18;
        case 0x468e1cu: goto label_468e1c;
        case 0x468e20u: goto label_468e20;
        case 0x468e24u: goto label_468e24;
        case 0x468e28u: goto label_468e28;
        case 0x468e2cu: goto label_468e2c;
        case 0x468e30u: goto label_468e30;
        case 0x468e34u: goto label_468e34;
        case 0x468e38u: goto label_468e38;
        case 0x468e3cu: goto label_468e3c;
        case 0x468e40u: goto label_468e40;
        case 0x468e44u: goto label_468e44;
        case 0x468e48u: goto label_468e48;
        case 0x468e4cu: goto label_468e4c;
        case 0x468e50u: goto label_468e50;
        case 0x468e54u: goto label_468e54;
        case 0x468e58u: goto label_468e58;
        case 0x468e5cu: goto label_468e5c;
        case 0x468e60u: goto label_468e60;
        case 0x468e64u: goto label_468e64;
        case 0x468e68u: goto label_468e68;
        case 0x468e6cu: goto label_468e6c;
        default: break;
    }

    ctx->pc = 0x468ac0u;

label_468ac0:
    // 0x468ac0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x468ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_468ac4:
    // 0x468ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x468ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_468ac8:
    // 0x468ac8: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x468ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_468acc:
    // 0x468acc: 0xa7a50150  sh          $a1, 0x150($sp)
    ctx->pc = 0x468accu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 336), (uint16_t)GPR_U32(ctx, 5));
label_468ad0:
    // 0x468ad0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x468ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_468ad4:
    // 0x468ad4: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_468ad8:
    if (ctx->pc == 0x468AD8u) {
        ctx->pc = 0x468ADCu;
        goto label_468adc;
    }
    ctx->pc = 0x468AD4u;
    {
        const bool branch_taken_0x468ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468ad4) {
            ctx->pc = 0x468C04u;
            goto label_468c04;
        }
    }
    ctx->pc = 0x468ADCu;
label_468adc:
    // 0x468adc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x468adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_468ae0:
    // 0x468ae0: 0x24636c20  addiu       $v1, $v1, 0x6C20
    ctx->pc = 0x468ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27680));
label_468ae4:
    // 0x468ae4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x468ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_468ae8:
    // 0x468ae8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x468ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_468aec:
    // 0x468aec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x468aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_468af0:
    // 0x468af0: 0x24636c38  addiu       $v1, $v1, 0x6C38
    ctx->pc = 0x468af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27704));
label_468af4:
    // 0x468af4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x468af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_468af8:
    // 0x468af8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x468af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_468afc:
    // 0x468afc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x468afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_468b00:
    // 0x468b00: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x468b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_468b04:
    // 0x468b04: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x468b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_468b08:
    // 0x468b08: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x468b08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_468b0c:
    // 0x468b0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x468b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_468b10:
    // 0x468b10: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_468b14:
    if (ctx->pc == 0x468B14u) {
        ctx->pc = 0x468B18u;
        goto label_468b18;
    }
    ctx->pc = 0x468B10u;
    {
        const bool branch_taken_0x468b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x468b10) {
            ctx->pc = 0x468BC0u;
            goto label_468bc0;
        }
    }
    ctx->pc = 0x468B18u;
label_468b18:
    // 0x468b18: 0x8f82b2e4  lw          $v0, -0x4D1C($gp)
    ctx->pc = 0x468b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947556)));
label_468b1c:
    // 0x468b1c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_468b20:
    if (ctx->pc == 0x468B20u) {
        ctx->pc = 0x468B24u;
        goto label_468b24;
    }
    ctx->pc = 0x468B1Cu;
    {
        const bool branch_taken_0x468b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468b1c) {
            ctx->pc = 0x468BC0u;
            goto label_468bc0;
        }
    }
    ctx->pc = 0x468B24u;
label_468b24:
    // 0x468b24: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x468b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_468b28:
    // 0x468b28: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x468b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_468b2c:
    // 0x468b2c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x468b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_468b30:
    // 0x468b30: 0xc115ee8  jal         func_457BA0
label_468b34:
    if (ctx->pc == 0x468B34u) {
        ctx->pc = 0x468B38u;
        goto label_468b38;
    }
    ctx->pc = 0x468B30u;
    SET_GPR_U32(ctx, 31, 0x468B38u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x468B30u, 0x468B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468B38u;
label_468b38:
    // 0x468b38: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_468b3c:
    if (ctx->pc == 0x468B3Cu) {
        ctx->pc = 0x468B40u;
        goto label_468b40;
    }
    ctx->pc = 0x468B38u;
    {
        const bool branch_taken_0x468b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468b38) {
            ctx->pc = 0x468BC0u;
            goto label_468bc0;
        }
    }
    ctx->pc = 0x468B40u;
label_468b40:
    // 0x468b40: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x468b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_468b44:
    // 0x468b44: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_468b48:
    if (ctx->pc == 0x468B48u) {
        ctx->pc = 0x468B4Cu;
        goto label_468b4c;
    }
    ctx->pc = 0x468B44u;
    {
        const bool branch_taken_0x468b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468b44) {
            ctx->pc = 0x468BC0u;
            goto label_468bc0;
        }
    }
    ctx->pc = 0x468B4Cu;
label_468b4c:
    // 0x468b4c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x468b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_468b50:
    // 0x468b50: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x468b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_468b54:
    // 0x468b54: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x468b54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_468b58:
    // 0x468b58: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x468b58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_468b5c:
    // 0x468b5c: 0x24e7f8e0  addiu       $a3, $a3, -0x720
    ctx->pc = 0x468b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965472));
label_468b60:
    // 0x468b60: 0x24080017  addiu       $t0, $zero, 0x17
    ctx->pc = 0x468b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_468b64:
    // 0x468b64: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x468b64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_468b68:
    // 0x468b68: 0x2529f8f0  addiu       $t1, $t1, -0x710
    ctx->pc = 0x468b68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965488));
label_468b6c:
    // 0x468b6c: 0xc113940  jal         func_44E500
label_468b70:
    if (ctx->pc == 0x468B70u) {
        ctx->pc = 0x468B74u;
        goto label_468b74;
    }
    ctx->pc = 0x468B6Cu;
    SET_GPR_U32(ctx, 31, 0x468B74u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x468B6Cu, 0x468B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468B74u;
label_468b74:
    // 0x468b74: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x468b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_468b78:
    // 0x468b78: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x468b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_468b7c:
    // 0x468b7c: 0x24a5f910  addiu       $a1, $a1, -0x6F0
    ctx->pc = 0x468b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965520));
label_468b80:
    // 0x468b80: 0xc115c24  jal         func_457090
label_468b84:
    if (ctx->pc == 0x468B84u) {
        ctx->pc = 0x468B88u;
        goto label_468b88;
    }
    ctx->pc = 0x468B80u;
    SET_GPR_U32(ctx, 31, 0x468B88u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x468B80u, 0x468B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468B88u;
label_468b88:
    // 0x468b88: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x468b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_468b8c:
    // 0x468b8c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x468b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_468b90:
    // 0x468b90: 0x40f809  jalr        $v0
label_468b94:
    if (ctx->pc == 0x468B94u) {
        ctx->pc = 0x468B98u;
        goto label_468b98;
    }
    ctx->pc = 0x468B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x468B98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468B90u, 0x468B98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x468B98u;
label_468b98:
    // 0x468b98: 0xaf82b2e4  sw          $v0, -0x4D1C($gp)
    ctx->pc = 0x468b98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947556), GPR_U32(ctx, 2));
label_468b9c:
    // 0x468b9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x468b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_468ba0:
    // 0x468ba0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_468ba4:
    if (ctx->pc == 0x468BA4u) {
        ctx->pc = 0x468BA8u;
        goto label_468ba8;
    }
    ctx->pc = 0x468BA0u;
    {
        const bool branch_taken_0x468ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468ba0) {
            ctx->pc = 0x468BB0u;
            goto label_468bb0;
        }
    }
    ctx->pc = 0x468BA8u;
label_468ba8:
    // 0x468ba8: 0xd  break       0
    ctx->pc = 0x468ba8u;
    runtime->handleBreak(rdram, ctx);
label_468bac:
    // 0x468bac: 0x0  nop
    ctx->pc = 0x468bacu;
    // NOP
label_468bb0:
    // 0x468bb0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x468bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_468bb4:
    // 0x468bb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x468bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_468bb8:
    // 0x468bb8: 0xc11392c  jal         func_44E4B0
label_468bbc:
    if (ctx->pc == 0x468BBCu) {
        ctx->pc = 0x468BC0u;
        goto label_468bc0;
    }
    ctx->pc = 0x468BB8u;
    SET_GPR_U32(ctx, 31, 0x468BC0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x468BB8u, 0x468BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468BC0u;
label_468bc0:
    // 0x468bc0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x468bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_468bc4:
    // 0x468bc4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x468bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_468bc8:
    // 0x468bc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x468bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468bcc:
    // 0x468bcc: 0xc11a234  jal         func_4688D0
label_468bd0:
    if (ctx->pc == 0x468BD0u) {
        ctx->pc = 0x468BD4u;
        goto label_468bd4;
    }
    ctx->pc = 0x468BCCu;
    SET_GPR_U32(ctx, 31, 0x468BD4u);
    ctx->pc = 0x4688D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4688D0u, 0x468BCCu, 0x468BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468BD4u;
label_468bd4:
    // 0x468bd4: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x468bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_468bd8:
    // 0x468bd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x468bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_468bdc:
    // 0x468bdc: 0xc11a268  jal         func_4689A0
label_468be0:
    if (ctx->pc == 0x468BE0u) {
        ctx->pc = 0x468BE4u;
        goto label_468be4;
    }
    ctx->pc = 0x468BDCu;
    SET_GPR_U32(ctx, 31, 0x468BE4u);
    ctx->pc = 0x4689A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4689A0u, 0x468BDCu, 0x468BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468BE4u;
label_468be4:
    // 0x468be4: 0x87a20150  lh          $v0, 0x150($sp)
    ctx->pc = 0x468be4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_468be8:
    // 0x468be8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x468be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_468bec:
    // 0x468bec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x468becu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_468bf0:
    // 0x468bf0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_468bf4:
    if (ctx->pc == 0x468BF4u) {
        ctx->pc = 0x468BF8u;
        goto label_468bf8;
    }
    ctx->pc = 0x468BF0u;
    {
        const bool branch_taken_0x468bf0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x468bf0) {
            ctx->pc = 0x468C04u;
            goto label_468c04;
        }
    }
    ctx->pc = 0x468BF8u;
label_468bf8:
    // 0x468bf8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x468bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_468bfc:
    // 0x468bfc: 0xc0ba070  jal         func_2E81C0
label_468c00:
    if (ctx->pc == 0x468C00u) {
        ctx->pc = 0x468C04u;
        goto label_468c04;
    }
    ctx->pc = 0x468BFCu;
    SET_GPR_U32(ctx, 31, 0x468C04u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x468BFCu, 0x468C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468C04u;
label_468c04:
    // 0x468c04: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x468c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_468c08:
    // 0x468c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x468c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_468c0c:
    // 0x468c0c: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x468c0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_468c10:
    // 0x468c10: 0x3e00008  jr          $ra
label_468c14:
    if (ctx->pc == 0x468C14u) {
        ctx->pc = 0x468C18u;
        goto label_468c18;
    }
    ctx->pc = 0x468C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468C18u;
label_468c18:
    // 0x468c18: 0x0  nop
    ctx->pc = 0x468c18u;
    // NOP
label_468c1c:
    // 0x468c1c: 0x0  nop
    ctx->pc = 0x468c1cu;
    // NOP
label_468c20:
    // 0x468c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x468c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_468c24:
    // 0x468c24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x468c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_468c28:
    // 0x468c28: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x468c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_468c2c:
    // 0x468c2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x468c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_468c30:
    // 0x468c30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x468c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_468c34:
    // 0x468c34: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x468c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_468c38:
    // 0x468c38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x468c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_468c3c:
    // 0x468c3c: 0x3e00008  jr          $ra
label_468c40:
    if (ctx->pc == 0x468C40u) {
        ctx->pc = 0x468C44u;
        goto label_468c44;
    }
    ctx->pc = 0x468C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468C44u;
label_468c44:
    // 0x468c44: 0x0  nop
    ctx->pc = 0x468c44u;
    // NOP
label_468c48:
    // 0x468c48: 0x0  nop
    ctx->pc = 0x468c48u;
    // NOP
label_468c4c:
    // 0x468c4c: 0x0  nop
    ctx->pc = 0x468c4cu;
    // NOP
label_468c50:
    // 0x468c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x468c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_468c54:
    // 0x468c54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x468c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_468c58:
    // 0x468c58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x468c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_468c5c:
    // 0x468c5c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x468c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_468c60:
    // 0x468c60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x468c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_468c64:
    // 0x468c64: 0x3e00008  jr          $ra
label_468c68:
    if (ctx->pc == 0x468C68u) {
        ctx->pc = 0x468C6Cu;
        goto label_468c6c;
    }
    ctx->pc = 0x468C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468C6Cu;
label_468c6c:
    // 0x468c6c: 0x0  nop
    ctx->pc = 0x468c6cu;
    // NOP
label_468c70:
    // 0x468c70: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x468c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_468c74:
    // 0x468c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x468c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_468c78:
    // 0x468c78: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x468c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_468c7c:
    // 0x468c7c: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x468c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
label_468c80:
    // 0x468c80: 0xafa60160  sw          $a2, 0x160($sp)
    ctx->pc = 0x468c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 6));
label_468c84:
    // 0x468c84: 0xafa70170  sw          $a3, 0x170($sp)
    ctx->pc = 0x468c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 7));
label_468c88:
    // 0x468c88: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x468c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_468c8c:
    // 0x468c8c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x468c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_468c90:
    // 0x468c90: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x468c90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_468c94:
    // 0x468c94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x468c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_468c98:
    // 0x468c98: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_468c9c:
    if (ctx->pc == 0x468C9Cu) {
        ctx->pc = 0x468CA0u;
        goto label_468ca0;
    }
    ctx->pc = 0x468C98u;
    {
        const bool branch_taken_0x468c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x468c98) {
            ctx->pc = 0x468D48u;
            goto label_468d48;
        }
    }
    ctx->pc = 0x468CA0u;
label_468ca0:
    // 0x468ca0: 0x8f82b2e8  lw          $v0, -0x4D18($gp)
    ctx->pc = 0x468ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947560)));
label_468ca4:
    // 0x468ca4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_468ca8:
    if (ctx->pc == 0x468CA8u) {
        ctx->pc = 0x468CACu;
        goto label_468cac;
    }
    ctx->pc = 0x468CA4u;
    {
        const bool branch_taken_0x468ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468ca4) {
            ctx->pc = 0x468D48u;
            goto label_468d48;
        }
    }
    ctx->pc = 0x468CACu;
label_468cac:
    // 0x468cac: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x468cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_468cb0:
    // 0x468cb0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x468cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_468cb4:
    // 0x468cb4: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x468cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_468cb8:
    // 0x468cb8: 0xc115ee8  jal         func_457BA0
label_468cbc:
    if (ctx->pc == 0x468CBCu) {
        ctx->pc = 0x468CC0u;
        goto label_468cc0;
    }
    ctx->pc = 0x468CB8u;
    SET_GPR_U32(ctx, 31, 0x468CC0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x468CB8u, 0x468CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468CC0u;
label_468cc0:
    // 0x468cc0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_468cc4:
    if (ctx->pc == 0x468CC4u) {
        ctx->pc = 0x468CC8u;
        goto label_468cc8;
    }
    ctx->pc = 0x468CC0u;
    {
        const bool branch_taken_0x468cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468cc0) {
            ctx->pc = 0x468D48u;
            goto label_468d48;
        }
    }
    ctx->pc = 0x468CC8u;
label_468cc8:
    // 0x468cc8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x468cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_468ccc:
    // 0x468ccc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_468cd0:
    if (ctx->pc == 0x468CD0u) {
        ctx->pc = 0x468CD4u;
        goto label_468cd4;
    }
    ctx->pc = 0x468CCCu;
    {
        const bool branch_taken_0x468ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468ccc) {
            ctx->pc = 0x468D48u;
            goto label_468d48;
        }
    }
    ctx->pc = 0x468CD4u;
label_468cd4:
    // 0x468cd4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x468cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_468cd8:
    // 0x468cd8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x468cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_468cdc:
    // 0x468cdc: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x468cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_468ce0:
    // 0x468ce0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x468ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_468ce4:
    // 0x468ce4: 0x24e7f8e0  addiu       $a3, $a3, -0x720
    ctx->pc = 0x468ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965472));
label_468ce8:
    // 0x468ce8: 0x24080039  addiu       $t0, $zero, 0x39
    ctx->pc = 0x468ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_468cec:
    // 0x468cec: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x468cecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_468cf0:
    // 0x468cf0: 0x2529f930  addiu       $t1, $t1, -0x6D0
    ctx->pc = 0x468cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965552));
label_468cf4:
    // 0x468cf4: 0xc113940  jal         func_44E500
label_468cf8:
    if (ctx->pc == 0x468CF8u) {
        ctx->pc = 0x468CFCu;
        goto label_468cfc;
    }
    ctx->pc = 0x468CF4u;
    SET_GPR_U32(ctx, 31, 0x468CFCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x468CF4u, 0x468CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468CFCu;
label_468cfc:
    // 0x468cfc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x468cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_468d00:
    // 0x468d00: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x468d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_468d04:
    // 0x468d04: 0x24a5f950  addiu       $a1, $a1, -0x6B0
    ctx->pc = 0x468d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965584));
label_468d08:
    // 0x468d08: 0xc115c24  jal         func_457090
label_468d0c:
    if (ctx->pc == 0x468D0Cu) {
        ctx->pc = 0x468D10u;
        goto label_468d10;
    }
    ctx->pc = 0x468D08u;
    SET_GPR_U32(ctx, 31, 0x468D10u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x468D08u, 0x468D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468D10u;
label_468d10:
    // 0x468d10: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x468d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_468d14:
    // 0x468d14: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x468d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_468d18:
    // 0x468d18: 0x40f809  jalr        $v0
label_468d1c:
    if (ctx->pc == 0x468D1Cu) {
        ctx->pc = 0x468D20u;
        goto label_468d20;
    }
    ctx->pc = 0x468D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x468D20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468D18u, 0x468D20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x468D20u;
label_468d20:
    // 0x468d20: 0xaf82b2e8  sw          $v0, -0x4D18($gp)
    ctx->pc = 0x468d20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947560), GPR_U32(ctx, 2));
label_468d24:
    // 0x468d24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x468d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_468d28:
    // 0x468d28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_468d2c:
    if (ctx->pc == 0x468D2Cu) {
        ctx->pc = 0x468D30u;
        goto label_468d30;
    }
    ctx->pc = 0x468D28u;
    {
        const bool branch_taken_0x468d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468d28) {
            ctx->pc = 0x468D38u;
            goto label_468d38;
        }
    }
    ctx->pc = 0x468D30u;
label_468d30:
    // 0x468d30: 0xd  break       0
    ctx->pc = 0x468d30u;
    runtime->handleBreak(rdram, ctx);
label_468d34:
    // 0x468d34: 0x0  nop
    ctx->pc = 0x468d34u;
    // NOP
label_468d38:
    // 0x468d38: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x468d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_468d3c:
    // 0x468d3c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x468d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_468d40:
    // 0x468d40: 0xc11392c  jal         func_44E4B0
label_468d44:
    if (ctx->pc == 0x468D44u) {
        ctx->pc = 0x468D48u;
        goto label_468d48;
    }
    ctx->pc = 0x468D40u;
    SET_GPR_U32(ctx, 31, 0x468D48u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x468D40u, 0x468D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468D48u;
label_468d48:
    // 0x468d48: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x468d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_468d4c:
    // 0x468d4c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x468d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_468d50:
    // 0x468d50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x468d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_468d54:
    // 0x468d54: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_468d58:
    if (ctx->pc == 0x468D58u) {
        ctx->pc = 0x468D5Cu;
        goto label_468d5c;
    }
    ctx->pc = 0x468D54u;
    {
        const bool branch_taken_0x468d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x468d54) {
            ctx->pc = 0x468D84u;
            goto label_468d84;
        }
    }
    ctx->pc = 0x468D5Cu;
label_468d5c:
    // 0x468d5c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x468d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_468d60:
    // 0x468d60: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x468d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_468d64:
    // 0x468d64: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x468d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_468d68:
    // 0x468d68: 0x8fa70170  lw          $a3, 0x170($sp)
    ctx->pc = 0x468d68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_468d6c:
    // 0x468d6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x468d6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_468d70:
    // 0x468d70: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x468d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_468d74:
    // 0x468d74: 0x320f809  jalr        $t9
label_468d78:
    if (ctx->pc == 0x468D78u) {
        ctx->pc = 0x468D7Cu;
        goto label_468d7c;
    }
    ctx->pc = 0x468D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x468D7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468D74u, 0x468D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x468D7Cu;
label_468d7c:
    // 0x468d7c: 0x10000009  b           . + 4 + (0x9 << 2)
label_468d80:
    if (ctx->pc == 0x468D80u) {
        ctx->pc = 0x468D84u;
        goto label_468d84;
    }
    ctx->pc = 0x468D7Cu;
    {
        const bool branch_taken_0x468d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x468d7c) {
            ctx->pc = 0x468DA4u;
            goto label_468da4;
        }
    }
    ctx->pc = 0x468D84u;
label_468d84:
    // 0x468d84: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x468d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_468d88:
    // 0x468d88: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x468d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_468d8c:
    // 0x468d8c: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x468d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_468d90:
    // 0x468d90: 0x8fa70170  lw          $a3, 0x170($sp)
    ctx->pc = 0x468d90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_468d94:
    // 0x468d94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x468d94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_468d98:
    // 0x468d98: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x468d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_468d9c:
    // 0x468d9c: 0x320f809  jalr        $t9
label_468da0:
    if (ctx->pc == 0x468DA0u) {
        ctx->pc = 0x468DA4u;
        goto label_468da4;
    }
    ctx->pc = 0x468D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x468DA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468D9Cu, 0x468DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x468DA4u;
label_468da4:
    // 0x468da4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x468da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_468da8:
    // 0x468da8: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x468da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_468dac:
    // 0x468dac: 0x3e00008  jr          $ra
label_468db0:
    if (ctx->pc == 0x468DB0u) {
        ctx->pc = 0x468DB4u;
        goto label_468db4;
    }
    ctx->pc = 0x468DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468DB4u;
label_468db4:
    // 0x468db4: 0x0  nop
    ctx->pc = 0x468db4u;
    // NOP
label_468db8:
    // 0x468db8: 0x0  nop
    ctx->pc = 0x468db8u;
    // NOP
label_468dbc:
    // 0x468dbc: 0x0  nop
    ctx->pc = 0x468dbcu;
    // NOP
label_468dc0:
    // 0x468dc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x468dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_468dc4:
    // 0x468dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x468dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_468dc8:
    // 0x468dc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x468dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_468dcc:
    // 0x468dcc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x468dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_468dd0:
    // 0x468dd0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x468dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_468dd4:
    // 0x468dd4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x468dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
label_468dd8:
    // 0x468dd8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x468dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_468ddc:
    // 0x468ddc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x468ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_468de0:
    // 0x468de0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x468de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_468de4:
    // 0x468de4: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x468de4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_468de8:
    // 0x468de8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x468de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_468dec:
    // 0x468dec: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x468decu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_468df0:
    // 0x468df0: 0x320f809  jalr        $t9
label_468df4:
    if (ctx->pc == 0x468DF4u) {
        ctx->pc = 0x468DF8u;
        goto label_468df8;
    }
    ctx->pc = 0x468DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x468DF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468DF0u, 0x468DF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x468DF8u;
label_468df8:
    // 0x468df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x468df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_468dfc:
    // 0x468dfc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x468dfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_468e00:
    // 0x468e00: 0x3e00008  jr          $ra
label_468e04:
    if (ctx->pc == 0x468E04u) {
        ctx->pc = 0x468E08u;
        goto label_468e08;
    }
    ctx->pc = 0x468E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468E08u;
label_468e08:
    // 0x468e08: 0x0  nop
    ctx->pc = 0x468e08u;
    // NOP
label_468e0c:
    // 0x468e0c: 0x0  nop
    ctx->pc = 0x468e0cu;
    // NOP
label_468e10:
    // 0x468e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x468e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_468e14:
    // 0x468e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x468e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_468e18:
    // 0x468e18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x468e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_468e1c:
    // 0x468e1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x468e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_468e20:
    // 0x468e20: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x468e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_468e24:
    // 0x468e24: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x468e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
label_468e28:
    // 0x468e28: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x468e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_468e2c:
    // 0x468e2c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x468e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_468e30:
    // 0x468e30: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x468e30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_468e34:
    // 0x468e34: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x468e34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_468e38:
    // 0x468e38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x468e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_468e3c:
    // 0x468e3c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x468e3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_468e40:
    // 0x468e40: 0x320f809  jalr        $t9
label_468e44:
    if (ctx->pc == 0x468E44u) {
        ctx->pc = 0x468E48u;
        goto label_468e48;
    }
    ctx->pc = 0x468E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x468E48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468E40u, 0x468E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x468E48u;
label_468e48:
    // 0x468e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x468e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_468e4c:
    // 0x468e4c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x468e4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_468e50:
    // 0x468e50: 0x3e00008  jr          $ra
label_468e54:
    if (ctx->pc == 0x468E54u) {
        ctx->pc = 0x468E58u;
        goto label_468e58;
    }
    ctx->pc = 0x468E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x468E58u;
label_468e58:
    // 0x468e58: 0x0  nop
    ctx->pc = 0x468e58u;
    // NOP
label_468e5c:
    // 0x468e5c: 0x0  nop
    ctx->pc = 0x468e5cu;
    // NOP
label_468e60:
    // 0x468e60: 0x811a2b0  j           func_468AC0
label_468e64:
    if (ctx->pc == 0x468E64u) {
        ctx->pc = 0x468E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x468E60u;
        // 0x468e64: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x468E68u;
        goto label_468e68;
    }
    ctx->pc = 0x468E60u;
    ctx->pc = 0x468E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x468E60u;
    // 0x468e64: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x468AC0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_468ac0;
    ctx->pc = 0x468E68u;
label_468e68:
    // 0x468e68: 0x0  nop
    ctx->pc = 0x468e68u;
    // NOP
label_468e6c:
    // 0x468e6c: 0x0  nop
    ctx->pc = 0x468e6cu;
    // NOP
    ctx->pc = 0x468e70u;
}
