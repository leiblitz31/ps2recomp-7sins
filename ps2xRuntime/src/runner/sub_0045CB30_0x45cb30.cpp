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

// Function: sub_0045CB30
// Address: 0x45cb30 - 0x45cf20
void sub_0045CB30_0x45cb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045CB30_0x45cb30");
#endif

    switch (ctx->pc) {
        case 0x45cb30u: goto label_45cb30;
        case 0x45cb34u: goto label_45cb34;
        case 0x45cb38u: goto label_45cb38;
        case 0x45cb3cu: goto label_45cb3c;
        case 0x45cb40u: goto label_45cb40;
        case 0x45cb44u: goto label_45cb44;
        case 0x45cb48u: goto label_45cb48;
        case 0x45cb4cu: goto label_45cb4c;
        case 0x45cb50u: goto label_45cb50;
        case 0x45cb54u: goto label_45cb54;
        case 0x45cb58u: goto label_45cb58;
        case 0x45cb5cu: goto label_45cb5c;
        case 0x45cb60u: goto label_45cb60;
        case 0x45cb64u: goto label_45cb64;
        case 0x45cb68u: goto label_45cb68;
        case 0x45cb6cu: goto label_45cb6c;
        case 0x45cb70u: goto label_45cb70;
        case 0x45cb74u: goto label_45cb74;
        case 0x45cb78u: goto label_45cb78;
        case 0x45cb7cu: goto label_45cb7c;
        case 0x45cb80u: goto label_45cb80;
        case 0x45cb84u: goto label_45cb84;
        case 0x45cb88u: goto label_45cb88;
        case 0x45cb8cu: goto label_45cb8c;
        case 0x45cb90u: goto label_45cb90;
        case 0x45cb94u: goto label_45cb94;
        case 0x45cb98u: goto label_45cb98;
        case 0x45cb9cu: goto label_45cb9c;
        case 0x45cba0u: goto label_45cba0;
        case 0x45cba4u: goto label_45cba4;
        case 0x45cba8u: goto label_45cba8;
        case 0x45cbacu: goto label_45cbac;
        case 0x45cbb0u: goto label_45cbb0;
        case 0x45cbb4u: goto label_45cbb4;
        case 0x45cbb8u: goto label_45cbb8;
        case 0x45cbbcu: goto label_45cbbc;
        case 0x45cbc0u: goto label_45cbc0;
        case 0x45cbc4u: goto label_45cbc4;
        case 0x45cbc8u: goto label_45cbc8;
        case 0x45cbccu: goto label_45cbcc;
        case 0x45cbd0u: goto label_45cbd0;
        case 0x45cbd4u: goto label_45cbd4;
        case 0x45cbd8u: goto label_45cbd8;
        case 0x45cbdcu: goto label_45cbdc;
        case 0x45cbe0u: goto label_45cbe0;
        case 0x45cbe4u: goto label_45cbe4;
        case 0x45cbe8u: goto label_45cbe8;
        case 0x45cbecu: goto label_45cbec;
        case 0x45cbf0u: goto label_45cbf0;
        case 0x45cbf4u: goto label_45cbf4;
        case 0x45cbf8u: goto label_45cbf8;
        case 0x45cbfcu: goto label_45cbfc;
        case 0x45cc00u: goto label_45cc00;
        case 0x45cc04u: goto label_45cc04;
        case 0x45cc08u: goto label_45cc08;
        case 0x45cc0cu: goto label_45cc0c;
        case 0x45cc10u: goto label_45cc10;
        case 0x45cc14u: goto label_45cc14;
        case 0x45cc18u: goto label_45cc18;
        case 0x45cc1cu: goto label_45cc1c;
        case 0x45cc20u: goto label_45cc20;
        case 0x45cc24u: goto label_45cc24;
        case 0x45cc28u: goto label_45cc28;
        case 0x45cc2cu: goto label_45cc2c;
        case 0x45cc30u: goto label_45cc30;
        case 0x45cc34u: goto label_45cc34;
        case 0x45cc38u: goto label_45cc38;
        case 0x45cc3cu: goto label_45cc3c;
        case 0x45cc40u: goto label_45cc40;
        case 0x45cc44u: goto label_45cc44;
        case 0x45cc48u: goto label_45cc48;
        case 0x45cc4cu: goto label_45cc4c;
        case 0x45cc50u: goto label_45cc50;
        case 0x45cc54u: goto label_45cc54;
        case 0x45cc58u: goto label_45cc58;
        case 0x45cc5cu: goto label_45cc5c;
        case 0x45cc60u: goto label_45cc60;
        case 0x45cc64u: goto label_45cc64;
        case 0x45cc68u: goto label_45cc68;
        case 0x45cc6cu: goto label_45cc6c;
        case 0x45cc70u: goto label_45cc70;
        case 0x45cc74u: goto label_45cc74;
        case 0x45cc78u: goto label_45cc78;
        case 0x45cc7cu: goto label_45cc7c;
        case 0x45cc80u: goto label_45cc80;
        case 0x45cc84u: goto label_45cc84;
        case 0x45cc88u: goto label_45cc88;
        case 0x45cc8cu: goto label_45cc8c;
        case 0x45cc90u: goto label_45cc90;
        case 0x45cc94u: goto label_45cc94;
        case 0x45cc98u: goto label_45cc98;
        case 0x45cc9cu: goto label_45cc9c;
        case 0x45cca0u: goto label_45cca0;
        case 0x45cca4u: goto label_45cca4;
        case 0x45cca8u: goto label_45cca8;
        case 0x45ccacu: goto label_45ccac;
        case 0x45ccb0u: goto label_45ccb0;
        case 0x45ccb4u: goto label_45ccb4;
        case 0x45ccb8u: goto label_45ccb8;
        case 0x45ccbcu: goto label_45ccbc;
        case 0x45ccc0u: goto label_45ccc0;
        case 0x45ccc4u: goto label_45ccc4;
        case 0x45ccc8u: goto label_45ccc8;
        case 0x45ccccu: goto label_45cccc;
        case 0x45ccd0u: goto label_45ccd0;
        case 0x45ccd4u: goto label_45ccd4;
        case 0x45ccd8u: goto label_45ccd8;
        case 0x45ccdcu: goto label_45ccdc;
        case 0x45cce0u: goto label_45cce0;
        case 0x45cce4u: goto label_45cce4;
        case 0x45cce8u: goto label_45cce8;
        case 0x45ccecu: goto label_45ccec;
        case 0x45ccf0u: goto label_45ccf0;
        case 0x45ccf4u: goto label_45ccf4;
        case 0x45ccf8u: goto label_45ccf8;
        case 0x45ccfcu: goto label_45ccfc;
        case 0x45cd00u: goto label_45cd00;
        case 0x45cd04u: goto label_45cd04;
        case 0x45cd08u: goto label_45cd08;
        case 0x45cd0cu: goto label_45cd0c;
        case 0x45cd10u: goto label_45cd10;
        case 0x45cd14u: goto label_45cd14;
        case 0x45cd18u: goto label_45cd18;
        case 0x45cd1cu: goto label_45cd1c;
        case 0x45cd20u: goto label_45cd20;
        case 0x45cd24u: goto label_45cd24;
        case 0x45cd28u: goto label_45cd28;
        case 0x45cd2cu: goto label_45cd2c;
        case 0x45cd30u: goto label_45cd30;
        case 0x45cd34u: goto label_45cd34;
        case 0x45cd38u: goto label_45cd38;
        case 0x45cd3cu: goto label_45cd3c;
        case 0x45cd40u: goto label_45cd40;
        case 0x45cd44u: goto label_45cd44;
        case 0x45cd48u: goto label_45cd48;
        case 0x45cd4cu: goto label_45cd4c;
        case 0x45cd50u: goto label_45cd50;
        case 0x45cd54u: goto label_45cd54;
        case 0x45cd58u: goto label_45cd58;
        case 0x45cd5cu: goto label_45cd5c;
        case 0x45cd60u: goto label_45cd60;
        case 0x45cd64u: goto label_45cd64;
        case 0x45cd68u: goto label_45cd68;
        case 0x45cd6cu: goto label_45cd6c;
        case 0x45cd70u: goto label_45cd70;
        case 0x45cd74u: goto label_45cd74;
        case 0x45cd78u: goto label_45cd78;
        case 0x45cd7cu: goto label_45cd7c;
        case 0x45cd80u: goto label_45cd80;
        case 0x45cd84u: goto label_45cd84;
        case 0x45cd88u: goto label_45cd88;
        case 0x45cd8cu: goto label_45cd8c;
        case 0x45cd90u: goto label_45cd90;
        case 0x45cd94u: goto label_45cd94;
        case 0x45cd98u: goto label_45cd98;
        case 0x45cd9cu: goto label_45cd9c;
        case 0x45cda0u: goto label_45cda0;
        case 0x45cda4u: goto label_45cda4;
        case 0x45cda8u: goto label_45cda8;
        case 0x45cdacu: goto label_45cdac;
        case 0x45cdb0u: goto label_45cdb0;
        case 0x45cdb4u: goto label_45cdb4;
        case 0x45cdb8u: goto label_45cdb8;
        case 0x45cdbcu: goto label_45cdbc;
        case 0x45cdc0u: goto label_45cdc0;
        case 0x45cdc4u: goto label_45cdc4;
        case 0x45cdc8u: goto label_45cdc8;
        case 0x45cdccu: goto label_45cdcc;
        case 0x45cdd0u: goto label_45cdd0;
        case 0x45cdd4u: goto label_45cdd4;
        case 0x45cdd8u: goto label_45cdd8;
        case 0x45cddcu: goto label_45cddc;
        case 0x45cde0u: goto label_45cde0;
        case 0x45cde4u: goto label_45cde4;
        case 0x45cde8u: goto label_45cde8;
        case 0x45cdecu: goto label_45cdec;
        case 0x45cdf0u: goto label_45cdf0;
        case 0x45cdf4u: goto label_45cdf4;
        case 0x45cdf8u: goto label_45cdf8;
        case 0x45cdfcu: goto label_45cdfc;
        case 0x45ce00u: goto label_45ce00;
        case 0x45ce04u: goto label_45ce04;
        case 0x45ce08u: goto label_45ce08;
        case 0x45ce0cu: goto label_45ce0c;
        case 0x45ce10u: goto label_45ce10;
        case 0x45ce14u: goto label_45ce14;
        case 0x45ce18u: goto label_45ce18;
        case 0x45ce1cu: goto label_45ce1c;
        case 0x45ce20u: goto label_45ce20;
        case 0x45ce24u: goto label_45ce24;
        case 0x45ce28u: goto label_45ce28;
        case 0x45ce2cu: goto label_45ce2c;
        case 0x45ce30u: goto label_45ce30;
        case 0x45ce34u: goto label_45ce34;
        case 0x45ce38u: goto label_45ce38;
        case 0x45ce3cu: goto label_45ce3c;
        case 0x45ce40u: goto label_45ce40;
        case 0x45ce44u: goto label_45ce44;
        case 0x45ce48u: goto label_45ce48;
        case 0x45ce4cu: goto label_45ce4c;
        case 0x45ce50u: goto label_45ce50;
        case 0x45ce54u: goto label_45ce54;
        case 0x45ce58u: goto label_45ce58;
        case 0x45ce5cu: goto label_45ce5c;
        case 0x45ce60u: goto label_45ce60;
        case 0x45ce64u: goto label_45ce64;
        case 0x45ce68u: goto label_45ce68;
        case 0x45ce6cu: goto label_45ce6c;
        case 0x45ce70u: goto label_45ce70;
        case 0x45ce74u: goto label_45ce74;
        case 0x45ce78u: goto label_45ce78;
        case 0x45ce7cu: goto label_45ce7c;
        case 0x45ce80u: goto label_45ce80;
        case 0x45ce84u: goto label_45ce84;
        case 0x45ce88u: goto label_45ce88;
        case 0x45ce8cu: goto label_45ce8c;
        case 0x45ce90u: goto label_45ce90;
        case 0x45ce94u: goto label_45ce94;
        case 0x45ce98u: goto label_45ce98;
        case 0x45ce9cu: goto label_45ce9c;
        case 0x45cea0u: goto label_45cea0;
        case 0x45cea4u: goto label_45cea4;
        case 0x45cea8u: goto label_45cea8;
        case 0x45ceacu: goto label_45ceac;
        case 0x45ceb0u: goto label_45ceb0;
        case 0x45ceb4u: goto label_45ceb4;
        case 0x45ceb8u: goto label_45ceb8;
        case 0x45cebcu: goto label_45cebc;
        case 0x45cec0u: goto label_45cec0;
        case 0x45cec4u: goto label_45cec4;
        case 0x45cec8u: goto label_45cec8;
        case 0x45ceccu: goto label_45cecc;
        case 0x45ced0u: goto label_45ced0;
        case 0x45ced4u: goto label_45ced4;
        case 0x45ced8u: goto label_45ced8;
        case 0x45cedcu: goto label_45cedc;
        case 0x45cee0u: goto label_45cee0;
        case 0x45cee4u: goto label_45cee4;
        case 0x45cee8u: goto label_45cee8;
        case 0x45ceecu: goto label_45ceec;
        case 0x45cef0u: goto label_45cef0;
        case 0x45cef4u: goto label_45cef4;
        case 0x45cef8u: goto label_45cef8;
        case 0x45cefcu: goto label_45cefc;
        case 0x45cf00u: goto label_45cf00;
        case 0x45cf04u: goto label_45cf04;
        case 0x45cf08u: goto label_45cf08;
        case 0x45cf0cu: goto label_45cf0c;
        case 0x45cf10u: goto label_45cf10;
        case 0x45cf14u: goto label_45cf14;
        case 0x45cf18u: goto label_45cf18;
        case 0x45cf1cu: goto label_45cf1c;
        default: break;
    }

    ctx->pc = 0x45cb30u;

label_45cb30:
    // 0x45cb30: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x45cb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_45cb34:
    // 0x45cb34: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x45cb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_45cb38:
    // 0x45cb38: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x45cb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_45cb3c:
    // 0x45cb3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x45cb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_45cb40:
    // 0x45cb40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x45cb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_45cb44:
    // 0x45cb44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x45cb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_45cb48:
    // 0x45cb48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x45cb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_45cb4c:
    // 0x45cb4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45cb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_45cb50:
    // 0x45cb50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45cb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45cb54:
    // 0x45cb54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45cb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45cb58:
    // 0x45cb58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45cb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45cb5c:
    // 0x45cb5c: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x45cb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_45cb60:
    // 0x45cb60: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x45cb60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
label_45cb64:
    // 0x45cb64: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x45cb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
label_45cb68:
    // 0x45cb68: 0x8fb000e0  lw          $s0, 0xE0($sp)
    ctx->pc = 0x45cb68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_45cb6c:
    // 0x45cb6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x45cb6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45cb70:
    // 0x45cb70: 0xc0f0c58  jal         func_3C3160
label_45cb74:
    if (ctx->pc == 0x45CB74u) {
        ctx->pc = 0x45CB78u;
        goto label_45cb78;
    }
    ctx->pc = 0x45CB70u;
    SET_GPR_U32(ctx, 31, 0x45CB78u);
    ctx->pc = 0x3C3160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C3160u, 0x45CB70u, 0x45CB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45CB78u;
label_45cb78:
    // 0x45cb78: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x45cb78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45cb7c:
    // 0x45cb7c: 0x12e000d8  beqz        $s7, . + 4 + (0xD8 << 2)
label_45cb80:
    if (ctx->pc == 0x45CB80u) {
        ctx->pc = 0x45CB84u;
        goto label_45cb84;
    }
    ctx->pc = 0x45CB7Cu;
    {
        const bool branch_taken_0x45cb7c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cb7c) {
            ctx->pc = 0x45CEE0u;
            goto label_45cee0;
        }
    }
    ctx->pc = 0x45CB84u;
label_45cb84:
    // 0x45cb84: 0x26e60028  addiu       $a2, $s7, 0x28
    ctx->pc = 0x45cb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 40));
label_45cb88:
    // 0x45cb88: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x45cb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_45cb8c:
    // 0x45cb8c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x45cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_45cb90:
    // 0x45cb90: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x45cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_45cb94:
    // 0x45cb94: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x45cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_45cb98:
    // 0x45cb98: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x45cb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_45cb9c:
    // 0x45cb9c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x45cb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_45cba0:
    // 0x45cba0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x45cba0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_45cba4:
    // 0x45cba4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x45cba4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_45cba8:
    // 0x45cba8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x45cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_45cbac:
    // 0x45cbac: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_45cbb0:
    if (ctx->pc == 0x45CBB0u) {
        ctx->pc = 0x45CBB4u;
        goto label_45cbb4;
    }
    ctx->pc = 0x45CBACu;
    {
        const bool branch_taken_0x45cbac = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x45cbac) {
            ctx->pc = 0x45CB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45cb90;
        }
    }
    ctx->pc = 0x45CBB4u;
label_45cbb4:
    // 0x45cbb4: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x45cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_45cbb8:
    // 0x45cbb8: 0x3c024b43  lui         $v0, 0x4B43
    ctx->pc = 0x45cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19267 << 16));
label_45cbbc:
    // 0x45cbbc: 0x34424150  ori         $v0, $v0, 0x4150
    ctx->pc = 0x45cbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16720);
label_45cbc0:
    // 0x45cbc0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_45cbc4:
    if (ctx->pc == 0x45CBC4u) {
        ctx->pc = 0x45CBC8u;
        goto label_45cbc8;
    }
    ctx->pc = 0x45CBC0u;
    {
        const bool branch_taken_0x45cbc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45cbc0) {
            ctx->pc = 0x45CBF0u;
            goto label_45cbf0;
        }
    }
    ctx->pc = 0x45CBC8u;
label_45cbc8:
    // 0x45cbc8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x45cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_45cbcc:
    // 0x45cbcc: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x45cbccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_45cbd0:
    // 0x45cbd0: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x45cbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_45cbd4:
    // 0x45cbd4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x45cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_45cbd8:
    // 0x45cbd8: 0x40f809  jalr        $v0
label_45cbdc:
    if (ctx->pc == 0x45CBDCu) {
        ctx->pc = 0x45CBE0u;
        goto label_45cbe0;
    }
    ctx->pc = 0x45CBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45CBE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45CBD8u, 0x45CBE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45CBE0u;
label_45cbe0:
    // 0x45cbe0: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x45cbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_45cbe4:
    // 0x45cbe4: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x45cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_45cbe8:
    // 0x45cbe8: 0x100000be  b           . + 4 + (0xBE << 2)
label_45cbec:
    if (ctx->pc == 0x45CBECu) {
        ctx->pc = 0x45CBF0u;
        goto label_45cbf0;
    }
    ctx->pc = 0x45CBE8u;
    {
        const bool branch_taken_0x45cbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cbe8) {
            ctx->pc = 0x45CEE4u;
            goto label_45cee4;
        }
    }
    ctx->pc = 0x45CBF0u;
label_45cbf0:
    // 0x45cbf0: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x45cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_45cbf4:
    // 0x45cbf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_45cbf8:
    if (ctx->pc == 0x45CBF8u) {
        ctx->pc = 0x45CBFCu;
        goto label_45cbfc;
    }
    ctx->pc = 0x45CBF4u;
    {
        const bool branch_taken_0x45cbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cbf4) {
            ctx->pc = 0x45CC08u;
            goto label_45cc08;
        }
    }
    ctx->pc = 0x45CBFCu;
label_45cbfc:
    // 0x45cbfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45cbfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45cc00:
    // 0x45cc00: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_45cc04:
    if (ctx->pc == 0x45CC04u) {
        ctx->pc = 0x45CC08u;
        goto label_45cc08;
    }
    ctx->pc = 0x45CC00u;
    {
        const bool branch_taken_0x45cc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cc00) {
            ctx->pc = 0x45CEE4u;
            goto label_45cee4;
        }
    }
    ctx->pc = 0x45CC08u;
label_45cc08:
    // 0x45cc08: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x45cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_45cc0c:
    // 0x45cc0c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x45cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_45cc10:
    // 0x45cc10: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x45cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_45cc14:
    // 0x45cc14: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x45cc14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45cc18:
    // 0x45cc18: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x45cc18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_45cc1c:
    // 0x45cc1c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45cc20:
    // 0x45cc20: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x45cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45cc24:
    // 0x45cc24: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x45cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_45cc28:
    // 0x45cc28: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_45cc2c:
    if (ctx->pc == 0x45CC2Cu) {
        ctx->pc = 0x45CC30u;
        goto label_45cc30;
    }
    ctx->pc = 0x45CC28u;
    {
        const bool branch_taken_0x45cc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cc28) {
            ctx->pc = 0x45CC44u;
            goto label_45cc44;
        }
    }
    ctx->pc = 0x45CC30u;
label_45cc30:
    // 0x45cc30: 0x8f82b15c  lw          $v0, -0x4EA4($gp)
    ctx->pc = 0x45cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
label_45cc34:
    // 0x45cc34: 0x2c2001b  divu        $zero, $s6, $v0
    ctx->pc = 0x45cc34u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 22) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 22) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,22); } }
label_45cc38:
    // 0x45cc38: 0x1812  mflo        $v1
    ctx->pc = 0x45cc38u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_45cc3c:
    // 0x45cc3c: 0x8f82b15c  lw          $v0, -0x4EA4($gp)
    ctx->pc = 0x45cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
label_45cc40:
    // 0x45cc40: 0x439818  mult        $s3, $v0, $v1
    ctx->pc = 0x45cc40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_45cc44:
    // 0x45cc44: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45cc48:
    // 0x45cc48: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x45cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_45cc4c:
    // 0x45cc4c: 0xc116f70  jal         func_45BDC0
label_45cc50:
    if (ctx->pc == 0x45CC50u) {
        ctx->pc = 0x45CC54u;
        goto label_45cc54;
    }
    ctx->pc = 0x45CC4Cu;
    SET_GPR_U32(ctx, 31, 0x45CC54u);
    ctx->pc = 0x45BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BDC0u, 0x45CC4Cu, 0x45CC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45CC54u;
label_45cc54:
    // 0x45cc54: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
label_45cc58:
    if (ctx->pc == 0x45CC58u) {
        ctx->pc = 0x45CC5Cu;
        goto label_45cc5c;
    }
    ctx->pc = 0x45CC54u;
    {
        const bool branch_taken_0x45cc54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x45cc54) {
            ctx->pc = 0x45CC6Cu;
            goto label_45cc6c;
        }
    }
    ctx->pc = 0x45CC5Cu;
label_45cc5c:
    // 0x45cc5c: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x45cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45cc60:
    // 0x45cc60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x45cc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45cc64:
    // 0x45cc64: 0xc117090  jal         func_45C240
label_45cc68:
    if (ctx->pc == 0x45CC68u) {
        ctx->pc = 0x45CC6Cu;
        goto label_45cc6c;
    }
    ctx->pc = 0x45CC64u;
    SET_GPR_U32(ctx, 31, 0x45CC6Cu);
    ctx->pc = 0x45C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45C240u, 0x45CC64u, 0x45CC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45CC6Cu;
label_45cc6c:
    // 0x45cc6c: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x45cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_45cc70:
    // 0x45cc70: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x45cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_45cc74:
    // 0x45cc74: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x45cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_45cc78:
    // 0x45cc78: 0x62f023  subu        $fp, $v1, $v0
    ctx->pc = 0x45cc78u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_45cc7c:
    // 0x45cc7c: 0x8fb40100  lw          $s4, 0x100($sp)
    ctx->pc = 0x45cc7cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_45cc80:
    // 0x45cc80: 0x3d4082b  sltu        $at, $fp, $s4
    ctx->pc = 0x45cc80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_45cc84:
    // 0x45cc84: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_45cc88:
    if (ctx->pc == 0x45CC88u) {
        ctx->pc = 0x45CC8Cu;
        goto label_45cc8c;
    }
    ctx->pc = 0x45CC84u;
    {
        const bool branch_taken_0x45cc84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cc84) {
            ctx->pc = 0x45CC90u;
            goto label_45cc90;
        }
    }
    ctx->pc = 0x45CC8Cu;
label_45cc8c:
    // 0x45cc8c: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x45cc8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_45cc90:
    // 0x45cc90: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45cc94:
    // 0x45cc94: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x45cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45cc98:
    // 0x45cc98: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x45cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_45cc9c:
    // 0x45cc9c: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_45cca0:
    if (ctx->pc == 0x45CCA0u) {
        ctx->pc = 0x45CCA4u;
        goto label_45cca4;
    }
    ctx->pc = 0x45CC9Cu;
    {
        const bool branch_taken_0x45cc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45cc9c) {
            ctx->pc = 0x45CD94u;
            goto label_45cd94;
        }
    }
    ctx->pc = 0x45CCA4u;
label_45cca4:
    // 0x45cca4: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45cca8:
    // 0x45cca8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x45cca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45ccac:
    // 0x45ccac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45ccacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45ccb0:
    // 0x45ccb0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x45ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_45ccb4:
    // 0x45ccb4: 0x40f809  jalr        $v0
label_45ccb8:
    if (ctx->pc == 0x45CCB8u) {
        ctx->pc = 0x45CCBCu;
        goto label_45ccbc;
    }
    ctx->pc = 0x45CCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45CCBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45CCB4u, 0x45CCBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45CCBCu;
label_45ccbc:
    // 0x45ccbc: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45ccc0:
    // 0x45ccc0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x45ccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45ccc4:
    // 0x45ccc4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x45ccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_45ccc8:
    // 0x45ccc8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x45ccc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_45cccc:
    // 0x45cccc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x45ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_45ccd0:
    // 0x45ccd0: 0x40f809  jalr        $v0
label_45ccd4:
    if (ctx->pc == 0x45CCD4u) {
        ctx->pc = 0x45CCD8u;
        goto label_45ccd8;
    }
    ctx->pc = 0x45CCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45CCD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45CCD0u, 0x45CCD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45CCD8u;
label_45ccd8:
    // 0x45ccd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x45ccd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45ccdc:
    // 0x45ccdc: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45cce0:
    // 0x45cce0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x45cce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_45cce4:
    // 0x45cce4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45cce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45cce8:
    // 0x45cce8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x45cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_45ccec:
    // 0x45ccec: 0x40f809  jalr        $v0
label_45ccf0:
    if (ctx->pc == 0x45CCF0u) {
        ctx->pc = 0x45CCF4u;
        goto label_45ccf4;
    }
    ctx->pc = 0x45CCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45CCF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45CCECu, 0x45CCF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45CCF4u;
label_45ccf4:
    // 0x45ccf4: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45ccf8:
    // 0x45ccf8: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x45ccf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_45ccfc:
    // 0x45ccfc: 0xc116f70  jal         func_45BDC0
label_45cd00:
    if (ctx->pc == 0x45CD00u) {
        ctx->pc = 0x45CD04u;
        goto label_45cd04;
    }
    ctx->pc = 0x45CCFCu;
    SET_GPR_U32(ctx, 31, 0x45CD04u);
    ctx->pc = 0x45BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BDC0u, 0x45CCFCu, 0x45CD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45CD04u;
label_45cd04:
    // 0x45cd04: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x45cd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_45cd08:
    // 0x45cd08: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x45cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45cd0c:
    // 0x45cd0c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x45cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_45cd10:
    // 0x45cd10: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x45cd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_45cd14:
    // 0x45cd14: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x45cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_45cd18:
    // 0x45cd18: 0xc116f64  jal         func_45BD90
label_45cd1c:
    if (ctx->pc == 0x45CD1Cu) {
        ctx->pc = 0x45CD20u;
        goto label_45cd20;
    }
    ctx->pc = 0x45CD18u;
    SET_GPR_U32(ctx, 31, 0x45CD20u);
    ctx->pc = 0x45BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD90u, 0x45CD18u, 0x45CD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45CD20u;
label_45cd20:
    // 0x45cd20: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x45cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_45cd24:
    // 0x45cd24: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x45cd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_45cd28:
    // 0x45cd28: 0xc116f70  jal         func_45BDC0
label_45cd2c:
    if (ctx->pc == 0x45CD2Cu) {
        ctx->pc = 0x45CD30u;
        goto label_45cd30;
    }
    ctx->pc = 0x45CD28u;
    SET_GPR_U32(ctx, 31, 0x45CD30u);
    ctx->pc = 0x45BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BDC0u, 0x45CD28u, 0x45CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45CD30u;
label_45cd30:
    // 0x45cd30: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x45cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_45cd34:
    // 0x45cd34: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x45cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_45cd38:
    // 0x45cd38: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x45cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_45cd3c:
    // 0x45cd3c: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x45cd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_45cd40:
    // 0x45cd40: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x45cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_45cd44:
    // 0x45cd44: 0xc116f64  jal         func_45BD90
label_45cd48:
    if (ctx->pc == 0x45CD48u) {
        ctx->pc = 0x45CD4Cu;
        goto label_45cd4c;
    }
    ctx->pc = 0x45CD44u;
    SET_GPR_U32(ctx, 31, 0x45CD4Cu);
    ctx->pc = 0x45BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BD90u, 0x45CD44u, 0x45CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45CD4Cu;
label_45cd4c:
    // 0x45cd4c: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x45cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_45cd50:
    // 0x45cd50: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x45cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_45cd54:
    // 0x45cd54: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x45cd54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_45cd58:
    // 0x45cd58: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x45cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_45cd5c:
    // 0x45cd5c: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x45cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_45cd60:
    // 0x45cd60: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x45cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_45cd64:
    // 0x45cd64: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x45cd64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_45cd68:
    // 0x45cd68: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
label_45cd6c:
    if (ctx->pc == 0x45CD6Cu) {
        ctx->pc = 0x45CD70u;
        goto label_45cd70;
    }
    ctx->pc = 0x45CD68u;
    {
        const bool branch_taken_0x45cd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45cd68) {
            ctx->pc = 0x45CEE0u;
            goto label_45cee0;
        }
    }
    ctx->pc = 0x45CD70u;
label_45cd70:
    // 0x45cd70: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x45cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_45cd74:
    // 0x45cd74: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x45cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_45cd78:
    // 0x45cd78: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x45cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_45cd7c:
    // 0x45cd7c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x45cd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45cd80:
    // 0x45cd80: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x45cd80u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_45cd84:
    // 0x45cd84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45cd88:
    // 0x45cd88: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x45cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_45cd8c:
    // 0x45cd8c: 0x10000054  b           . + 4 + (0x54 << 2)
label_45cd90:
    if (ctx->pc == 0x45CD90u) {
        ctx->pc = 0x45CD94u;
        goto label_45cd94;
    }
    ctx->pc = 0x45CD8Cu;
    {
        const bool branch_taken_0x45cd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cd8c) {
            ctx->pc = 0x45CEE0u;
            goto label_45cee0;
        }
    }
    ctx->pc = 0x45CD94u;
label_45cd94:
    // 0x45cd94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x45cd94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45cd98:
    // 0x45cd98: 0x1000000a  b           . + 4 + (0xA << 2)
label_45cd9c:
    if (ctx->pc == 0x45CD9Cu) {
        ctx->pc = 0x45CDA0u;
        goto label_45cda0;
    }
    ctx->pc = 0x45CD98u;
    {
        const bool branch_taken_0x45cd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cd98) {
            ctx->pc = 0x45CDC4u;
            goto label_45cdc4;
        }
    }
    ctx->pc = 0x45CDA0u;
label_45cda0:
    // 0x45cda0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_45cda4:
    // 0x45cda4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45cda8:
    // 0x45cda8: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x45cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
label_45cdac:
    // 0x45cdac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45cdb0:
    // 0x45cdb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45cdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45cdb4:
    // 0x45cdb4: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x45cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_45cdb8:
    // 0x45cdb8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_45cdbc:
    if (ctx->pc == 0x45CDBCu) {
        ctx->pc = 0x45CDC0u;
        goto label_45cdc0;
    }
    ctx->pc = 0x45CDB8u;
    {
        const bool branch_taken_0x45cdb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45cdb8) {
            ctx->pc = 0x45CDD0u;
            goto label_45cdd0;
        }
    }
    ctx->pc = 0x45CDC0u;
label_45cdc0:
    // 0x45cdc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x45cdc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_45cdc4:
    // 0x45cdc4: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x45cdc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_45cdc8:
    // 0x45cdc8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_45cdcc:
    if (ctx->pc == 0x45CDCCu) {
        ctx->pc = 0x45CDD0u;
        goto label_45cdd0;
    }
    ctx->pc = 0x45CDC8u;
    {
        const bool branch_taken_0x45cdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45cdc8) {
            ctx->pc = 0x45CDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45cda0;
        }
    }
    ctx->pc = 0x45CDD0u;
label_45cdd0:
    // 0x45cdd0: 0x2d31023  subu        $v0, $s6, $s3
    ctx->pc = 0x45cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_45cdd4:
    // 0x45cdd4: 0x282a821  addu        $s5, $s4, $v0
    ctx->pc = 0x45cdd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_45cdd8:
    // 0x45cdd8: 0x8f82b15c  lw          $v0, -0x4EA4($gp)
    ctx->pc = 0x45cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
label_45cddc:
    // 0x45cddc: 0x2a2001b  divu        $zero, $s5, $v0
    ctx->pc = 0x45cddcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_45cde0:
    // 0x45cde0: 0x1010  mfhi        $v0
    ctx->pc = 0x45cde0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_45cde4:
    // 0x45cde4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_45cde8:
    if (ctx->pc == 0x45CDE8u) {
        ctx->pc = 0x45CDECu;
        goto label_45cdec;
    }
    ctx->pc = 0x45CDE4u;
    {
        const bool branch_taken_0x45cde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45cde4) {
            ctx->pc = 0x45CE04u;
            goto label_45ce04;
        }
    }
    ctx->pc = 0x45CDECu;
label_45cdec:
    // 0x45cdec: 0x8f82b15c  lw          $v0, -0x4EA4($gp)
    ctx->pc = 0x45cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
label_45cdf0:
    // 0x45cdf0: 0x2a2001b  divu        $zero, $s5, $v0
    ctx->pc = 0x45cdf0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_45cdf4:
    // 0x45cdf4: 0x1012  mflo        $v0
    ctx->pc = 0x45cdf4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_45cdf8:
    // 0x45cdf8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x45cdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_45cdfc:
    // 0x45cdfc: 0x8f82b15c  lw          $v0, -0x4EA4($gp)
    ctx->pc = 0x45cdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947164)));
label_45ce00:
    // 0x45ce00: 0x43a818  mult        $s5, $v0, $v1
    ctx->pc = 0x45ce00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_45ce04:
    // 0x45ce04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x45ce04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45ce08:
    // 0x45ce08: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x45ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_45ce0c:
    // 0x45ce0c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x45ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_45ce10:
    // 0x45ce10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45ce14:
    // 0x45ce14: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45ce18:
    // 0x45ce18: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45ce1c:
    // 0x45ce1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45ce20:
    // 0x45ce20: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x45ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_45ce24:
    // 0x45ce24: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x45ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_45ce28:
    // 0x45ce28: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x45ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_45ce2c:
    // 0x45ce2c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45ce30:
    // 0x45ce30: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45ce34:
    // 0x45ce34: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45ce38:
    // 0x45ce38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45ce3c:
    // 0x45ce3c: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x45ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
label_45ce40:
    // 0x45ce40: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x45ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_45ce44:
    // 0x45ce44: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x45ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_45ce48:
    // 0x45ce48: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45ce4c:
    // 0x45ce4c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45ce50:
    // 0x45ce50: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45ce54:
    // 0x45ce54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45ce58:
    // 0x45ce58: 0xac55000c  sw          $s5, 0xC($v0)
    ctx->pc = 0x45ce58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
label_45ce5c:
    // 0x45ce5c: 0x2d32023  subu        $a0, $s6, $s3
    ctx->pc = 0x45ce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_45ce60:
    // 0x45ce60: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x45ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_45ce64:
    // 0x45ce64: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x45ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_45ce68:
    // 0x45ce68: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45ce6c:
    // 0x45ce6c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45ce70:
    // 0x45ce70: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45ce74:
    // 0x45ce74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45ce78:
    // 0x45ce78: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x45ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
label_45ce7c:
    // 0x45ce7c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x45ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_45ce80:
    // 0x45ce80: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x45ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_45ce84:
    // 0x45ce84: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45ce84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45ce88:
    // 0x45ce88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45ce8c:
    // 0x45ce8c: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45ce90:
    // 0x45ce90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45ce94:
    // 0x45ce94: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x45ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
label_45ce98:
    // 0x45ce98: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x45ce98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_45ce9c:
    // 0x45ce9c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x45ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_45cea0:
    // 0x45cea0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x45cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_45cea4:
    // 0x45cea4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45cea8:
    // 0x45cea8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45ceac:
    // 0x45ceac: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45ceb0:
    // 0x45ceb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45ceb4:
    // 0x45ceb4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x45ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_45ceb8:
    // 0x45ceb8: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x45ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_45cebc:
    // 0x45cebc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x45cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_45cec0:
    // 0x45cec0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45cec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45cec4:
    // 0x45cec4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45cec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45cec8:
    // 0x45cec8: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x45cec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
label_45cecc:
    // 0x45cecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45ced0:
    // 0x45ced0: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x45ced0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
label_45ced4:
    // 0x45ced4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45ced4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ced8:
    // 0x45ced8: 0x10000002  b           . + 4 + (0x2 << 2)
label_45cedc:
    if (ctx->pc == 0x45CEDCu) {
        ctx->pc = 0x45CEE0u;
        goto label_45cee0;
    }
    ctx->pc = 0x45CED8u;
    {
        const bool branch_taken_0x45ced8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ced8) {
            ctx->pc = 0x45CEE4u;
            goto label_45cee4;
        }
    }
    ctx->pc = 0x45CEE0u;
label_45cee0:
    // 0x45cee0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x45cee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45cee4:
    // 0x45cee4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x45cee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_45cee8:
    // 0x45cee8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x45cee8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_45ceec:
    // 0x45ceec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x45ceecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_45cef0:
    // 0x45cef0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x45cef0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_45cef4:
    // 0x45cef4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x45cef4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_45cef8:
    // 0x45cef8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x45cef8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_45cefc:
    // 0x45cefc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45cefcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45cf00:
    // 0x45cf00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45cf00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45cf04:
    // 0x45cf04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45cf04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45cf08:
    // 0x45cf08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45cf08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45cf0c:
    // 0x45cf0c: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x45cf0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_45cf10:
    // 0x45cf10: 0x3e00008  jr          $ra
label_45cf14:
    if (ctx->pc == 0x45CF14u) {
        ctx->pc = 0x45CF18u;
        goto label_45cf18;
    }
    ctx->pc = 0x45CF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45CF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45CF18u;
label_45cf18:
    // 0x45cf18: 0x0  nop
    ctx->pc = 0x45cf18u;
    // NOP
label_45cf1c:
    // 0x45cf1c: 0x0  nop
    ctx->pc = 0x45cf1cu;
    // NOP
    ctx->pc = 0x45cf20u;
}
